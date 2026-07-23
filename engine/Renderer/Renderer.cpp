#include "Renderer.h"

namespace mv
{

    Renderer::Renderer()
    {}

    Renderer::~Renderer()
    {
        if (m_Renderer)
        {
            SDL_DestroyRenderer(m_Renderer);
            m_Renderer = nullptr;
        }
    }

    bool Renderer::Initialize(SDL_Window* window)
    {
        m_Renderer = SDL_CreateRenderer(window, nullptr);

        return m_Renderer != nullptr;
    }

    void Renderer::Clear()
    {
        SDL_SetRenderDrawColor(
            m_Renderer,
            10,
            10,
            20,
            255);

        SDL_RenderClear(m_Renderer);
    }

    void Renderer::Present()
    {
        SDL_RenderPresent(m_Renderer);
    }

    SDL_Renderer* Renderer::GetSDLRenderer() const
    {
        return m_Renderer;
    }

}