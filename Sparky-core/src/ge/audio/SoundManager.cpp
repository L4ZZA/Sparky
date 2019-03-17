#include "ge/pch.h"
#include "SoundManager.h"

#ifdef SPARKY_PLATFORM_WEB
	#include <emscripten/emscripten.h>
#else
	#define GAU_THREAD_POLICY_MULTI 2
	#include <ga.h>
	#include <gau.h>
#endif

#include "ge/system/Memory.h"

namespace ge { namespace audio {

	gau_Manager* SoundManager::m_Manager = nullptr;
	ga_Mixer* SoundManager::m_Mixer = nullptr;

	std::vector<Sound*> SoundManager::m_Sounds;

	void SoundManager::Init()
	{
		gc_initialize(0);
		m_Manager = gau_manager_create();
		m_Mixer = gau_manager_mixer(m_Manager);
	}

	Sound* SoundManager::Add(Sound* sound)
	{
		m_Sounds.push_back(sound);
		return sound;
	}

	Sound* SoundManager::Get(const String& name)
	{
		for (Sound* sound : m_Sounds)
		{
			if (sound->GetName() == name)
				return sound;
		}
		return nullptr;
	}

	void SoundManager::Clean()
	{
		for (uint i = 0; i < m_Sounds.size(); i++)
			spdel m_Sounds[i];

		gau_manager_destroy(m_Manager);
		gc_shutdown();
	}

	void SoundManager::Update()
	{
		gau_manager_update(m_Manager);
	}

} }