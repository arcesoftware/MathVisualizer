#include "Application.h"


namespace mv
{


    Application::Application()
        : m_Running(false)
    {

    }


    Application::~Application()
    {
        Shutdown();
    }



    bool Application::Initialize()
    {

        if (!m_Window.Create(
            "MathVisualizer",
            1280,
            720))
        {
            return false;
        }


        if (!m_Renderer.Initialize(
            m_Window.GetNativeWindow()))
        {
            return false;
        }


        m_Running = true;


        return true;
    }



    void Application::Run()
    {

        while (m_Running)
        {
            ProcessEvents();

            Update();

            Render();
        }

    }



    void Application::ProcessEvents()
    {

        m_Window.PollEvents();


        if (!m_Window.IsOpen())
        {
            m_Running = false;
        }

    }



    void Application::Update()
    {

        Time::Update();


        m_Particles.Update(
            Time::DeltaTime()
        );

    }



    void Application::Render()
    {

        m_Renderer.Clear();


        m_Particles.Render(
            m_Renderer.GetSDLRenderer()
        );


        m_Renderer.Present();

    }



    void Application::Shutdown()
    {

        m_Window.Destroy();


        m_Running = false;

    }


}