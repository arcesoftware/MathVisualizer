#pragma once

namespace mv
{

    class Time
    {

    public:

        static void Update();

        static float DeltaTime();

        static float FPS();


    private:

        static float m_DeltaTime;

        static float m_FPS;

    };

}