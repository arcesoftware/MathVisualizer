#pragma once

#include "Window.h"
#include "Time.h"

#include "../Renderer/Renderer.h"
#include "../Physics/ParticleSystem.h"


namespace mv
{

    class Application
    {

    public:

        Application();

        ~Application();


        bool Initialize();

        void Run();

        void Shutdown();


    private:

        void ProcessEvents();

        void Update();

        void Render();


    private:

        Window m_Window;

        Renderer m_Renderer;

        ParticleSystem m_Particles;

        bool m_Running;

    };

}