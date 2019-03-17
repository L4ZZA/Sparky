#pragma once

//
// Sparky Engine header file
//

#include <ge/app/Application.h>
#include <ge/app/Window.h>

#include <ge/audio/Sound.h>
#include <ge/audio/SoundManager.h>

#include <ge/debug/DebugLayer.h>
#include <ge/debug/DebugMenu.h>
#include <ge/debug/DebugMenuAction.h>
#include <ge/debug/DebugMenuItem.h>

#include <ge/entity/Entity.h>
#include <ge/entity/component/Component.h>
#include <ge/entity/component/MeshComponent.h>
#include <ge/entity/component/TransformComponent.h>

#include <ge/events/Event.h>
#include <ge/events/KeyEvent.h>
#include <ge/events/MouseEvent.h>

#include <ge/graphics/Renderer.h>
#include <ge/graphics/Renderer2D.h>
#include <ge/graphics/Renderer3D.h>
#include <ge/graphics/ForwardRenderer.h>
#include <ge/graphics/DeferredRenderer.h>

#include <ge/graphics/Font.h>
#include <ge/graphics/FontManager.h>
#include <ge/graphics/GBuffer.h>
#include <ge/graphics/IRenderable.h>
#include <ge/graphics/Label.h>
#include <ge/graphics/Mask.h>
#include <ge/graphics/Material.h>
#include <ge/graphics/PBRMaterial.h>
#include <ge/graphics/Mesh.h>
#include <ge/graphics/MeshFactory.h>
#include <ge/graphics/Model.h>
#include <ge/graphics/Renderable2D.h>
#include <ge/graphics/RenderCommand.h>
#include <ge/graphics/Scene.h>
#include <ge/graphics/Sprite.h>
#include <ge/graphics/TextureManager.h>

#include <ge/graphics/camera/Camera.h>
#include <ge/graphics/camera/MayaCamera.h>
#include <ge/graphics/camera/FPSCamera.h>

#include <ge/graphics/layers/Group.h>
#include <ge/graphics/layers/Layer.h>
#include <ge/graphics/layers/Layer2D.h>
#include <ge/graphics/layers/Layer3D.h>

#include <ge/graphics/postfx/PostEffects.h>
#include <ge/graphics/postfx/PostEffectsPass.h>

#include <ge/graphics/shaders/Shader.h>
#include <ge/graphics/shaders/ShaderFactory.h>
#include <ge/graphics/shaders/ShaderManager.h>
#include <ge/graphics/shaders/ShaderUniform.h>

#include <ge/graphics/API/Texture.h>
#include <ge/graphics/API/Texture2D.h>
#include <ge/graphics/API/TextureCube.h>
#include <ge/graphics/API/TextureDepth.h>
#include <ge/graphics/API/Framebuffer.h>
#include <ge/graphics/API/Framebuffer2D.h>
#include <ge/graphics/API/FramebufferDepth.h>

#include <ge/maths/AABB.h>
#include <ge/maths/mat4.h>
#include <ge/maths/maths_func.h>
#include <ge/maths/Quaternion.h>
#include <ge/maths/tvec2.h>
#include <ge/maths/vec2.h>
#include <ge/maths/vec3.h>
#include <ge/maths/vec4.h>

#include <ge/utils/ImageLoad.h>
#include <ge/utils/Log.h>
#include <ge/utils/Timer.h>
#include <ge/utils/Timestep.h>

#include <ge/system/FileSystem.h>
#include <ge/system/Memory.h>
#include <ge/system/MemoryManager.h>
#include <ge/system/VFS.h>

#include <ge/String.h>
#include <ge/Types.h>
