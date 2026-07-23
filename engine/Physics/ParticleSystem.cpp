#include "ParticleSystem.h"

#include <algorithm>
#include <cstdlib>


namespace mv
{


    ParticleSystem::ParticleSystem()
    {
        m_Particles.reserve(2000);
    }



    ParticleSystem::~ParticleSystem()
    {

    }



    void ParticleSystem::Spawn()
    {
        Particle p;


        p.position = { 640.0f, 650.0f };


        p.velocity =
        {
            ((rand() % 200) - 100) * 0.75f,
            -(150.0f + (rand() % 150))
        };


        p.acceleration = { 0.0f, 0.0f };


        p.mass = 1.0f;


        p.age = 0.0f;


        p.lifetime = 4.0f;


        m_Particles.push_back(p);
    }



    void ParticleSystem::Update(float dt)
    {

        // Spawn new particles
        for (int i = 0; i < 12; i++)
        {
            Spawn();
        }



        const Vector2 gravity(0.0f, 300.0f);



        // Update particles
        for (Particle& p : m_Particles)
        {

            p.acceleration = gravity;


            p.velocity += p.acceleration * dt;


            p.position += p.velocity * dt;


            p.age += dt;

        }



        // Remove expired particles
        m_Particles.erase(

            std::remove_if(

                m_Particles.begin(),

                m_Particles.end(),

                [](const Particle& p)
                {
                    return p.age >= p.lifetime;
                }

            ),

            m_Particles.end()

        );

    }



    void ParticleSystem::Render(SDL_Renderer* renderer)
    {

        SDL_SetRenderDrawColor(
            renderer,
            255,
            255,
            255,
            255
        );


        for (const Particle& p : m_Particles)
        {

            SDL_RenderPoint(
                renderer,
                p.position.x,
                p.position.y
            );

        }

    }


}