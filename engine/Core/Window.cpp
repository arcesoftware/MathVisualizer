#include "Window.h"


namespace mv
{


    Window::Window()
        :
        m_Window(nullptr),
        m_Open(false)
    {

    }



    Window::~Window()
    {
        Destroy();
    }



    bool Window::Create(
        const char* title,
        int width,
        int height
    )
    {

        if (!SDL_Init(SDL_INIT_VIDEO))
        {
            return false;
        }


        m_Window = SDL_CreateWindow(
            title,
            width,
            height,
            0
        );


        if (m_Window == nullptr)
        {
            SDL_Quit();
            return false;
        }


        m_Open = true;


        return true;
    }



    void Window::Destroy()
    {

        if (m_Window != nullptr)
        {
            SDL_DestroyWindow(m_Window);
            m_Window = nullptr;
        }


        SDL_Quit();


        m_Open = false;

    }



    void Window::PollEvents()
    {

        SDL_Event event;


        while (SDL_PollEvent(&event))
        {

            switch (event.type)
            {

            case SDL_EVENT_QUIT:

                m_Open = false;

                break;


            default:

                break;

            }

        }

    }



    bool Window::IsOpen() const
    {
        return m_Open;
    }



    SDL_Window* Window::GetNativeWindow() const
    {
        return m_Window;
    }


}