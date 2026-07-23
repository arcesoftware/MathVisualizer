#pragma once

#include "../Math/Vector2.h"

namespace mv
{

    struct Particle
    {
        Vector2 position;
        Vector2 velocity;
        Vector2 acceleration;

        float mass = 1.0f;

        float age = 0.0f;

        float lifetime = 5.0f;
    };

}