#pragma once

#include <SDL3/SDL.h>


namespace mv
{

    class Window
    {

    public:

        Window();

        ~Window();


        bool Create(
            const char* title,
            int width,
            int height
        );


        void Destroy();


        void PollEvents();


        bool IsOpen() const;


        SDL_Window* GetNativeWindow() const;



    private:

        SDL_Window* m_Window;

        bool m_Open;

    };

}