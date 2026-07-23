#pragma once

#include <SDL3/SDL.h>

namespace mv
{

    class Renderer
    {
    public:

        Renderer();

        ~Renderer();

        bool Initialize(SDL_Window* window);

        void Clear();

        void Present();

        SDL_Renderer* GetSDLRenderer() const;

    private:

        SDL_Renderer* m_Renderer = nullptr;
    };

}