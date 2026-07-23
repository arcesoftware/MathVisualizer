#pragma once

#include <vector>

#include <SDL3/SDL.h>

#include "Particle.h"


namespace mv
{

    class ParticleSystem
    {

    public:

        ParticleSystem();

        ~ParticleSystem();


        void Update(float dt);

        void Render(SDL_Renderer* renderer);


    private:

        void Spawn();


    private:

        std::vector<Particle> m_Particles;

    };


}