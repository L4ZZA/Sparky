#include "ge/pch.h"
#include "Sound.h"
#include "SoundManager.h"


	#include <ga.h>
	#include <gau.h>

namespace ge { namespace audio {

	Sound::Sound(const String& name, const String& filename)
		: m_Name(name), m_Filename(filename), m_Playing(false), m_Count(0)
	{
		std::vector<String> split = SplitString(m_Filename, '.');
		if (split.size() < 2)
		{
			std::cout << "[Sound] Invalid file name '" << m_Filename << "'!" << std::endl;
			return;
		}

		m_Sound = gau_load_sound_file(filename.c_str(), split.back().c_str());
		if (m_Sound == nullptr)
			std::cout << "[Sound] Could not load file '" << m_Filename << "'!" << std::endl;
	}

	Sound::~Sound()
	{
		ga_sound_release(m_Sound);
	}

	void Sound::Play()
	{
		gc_int32 quit = 0;
		m_Handle = gau_create_handle_sound(SoundManager::m_Mixer, m_Sound, &destroy_on_finish, &quit, NULL);
		m_Handle->sound = this;
		ga_handle_play(m_Handle);
		m_Count++;
		m_Playing = true;
	}

	void Sound::Loop()
	{
		gc_int32 quit = 0;
		m_Handle = gau_create_handle_sound(SoundManager::m_Mixer, m_Sound, &loop_on_finish, &quit, NULL);
		m_Handle->sound = this;
		ga_handle_play(m_Handle);
		m_Playing = true;
	}

	void Sound::Resume()
	{
		if (m_Playing)
			return;

		m_Playing = true;
		ga_handle_play(m_Handle);
	}

	void Sound::Pause()
	{
		if (!m_Playing)
			return;

		m_Playing = false;
		ga_handle_stop(m_Handle);
	}

	void Sound::Stop()
	{
		if (!m_Playing)
			return;

		ga_handle_stop(m_Handle);
		m_Playing = false;
	}

	void Sound::SetGain(float gain)
	{
		if (!m_Playing)
		{
			std::cout << "[Sound] Cannot set gain! Sound is not currently playing!" << std::endl;
			return;
		}
		m_Gain = gain;
		ga_handle_setParamf(m_Handle, GA_HANDLE_PARAM_GAIN, gain);
	}


	void destroy_on_finish(ga_Handle* in_handle, void* in_context)
	{
		Sound* sound = (Sound*)in_handle->sound;
		sound->m_Count--;
		if (sound->m_Count == 0)
			sound->Stop();
	}

	void loop_on_finish(ga_Handle* in_handle, void* in_context)
	{
		Sound* sound = (Sound*) in_handle->sound;
		sound->Loop();
		ga_handle_destroy(in_handle);
	}

} }