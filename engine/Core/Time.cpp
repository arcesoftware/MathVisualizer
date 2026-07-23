#include "Time.h"

#include <chrono>


namespace mv
{


    float Time::m_DeltaTime = 0.0f;

    float Time::m_FPS = 0.0f;



    void Time::Update()
    {

        static auto previousTime =
            std::chrono::high_resolution_clock::now();



        auto currentTime =
            std::chrono::high_resolution_clock::now();



        std::chrono::duration<float> elapsed =
            currentTime - previousTime;



        previousTime = currentTime;



        m_DeltaTime = elapsed.count();



        if (m_DeltaTime > 0.0f)
        {
            m_FPS = 1.0f / m_DeltaTime;
        }

    }



    float Time::DeltaTime()
    {
        return m_DeltaTime;
    }



    float Time::FPS()
    {
        return m_FPS;
    }


}