#pragma once

#include <cmath>

namespace mv
{

    struct Vector2
    {
        float x = 0.0f;
        float y = 0.0f;

        constexpr Vector2() = default;

        constexpr Vector2(float xValue, float yValue)
            : x(xValue), y(yValue)
        {}

        constexpr Vector2 operator+(const Vector2& rhs) const
        {
            return { x + rhs.x, y + rhs.y };
        }

        constexpr Vector2 operator-(const Vector2& rhs) const
        {
            return { x - rhs.x, y - rhs.y };
        }

        constexpr Vector2 operator*(float scalar) const
        {
            return { x * scalar, y * scalar };
        }

        constexpr Vector2 operator/(float scalar) const
        {
            return { x / scalar, y / scalar };
        }

        Vector2& operator+=(const Vector2& rhs)
        {
            x += rhs.x;
            y += rhs.y;
            return *this;
        }

        Vector2& operator-=(const Vector2& rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            return *this;
        }

        Vector2& operator*=(float scalar)
        {
            x *= scalar;
            y *= scalar;
            return *this;
        }

        float Length() const
        {
            return std::sqrt(x * x + y * y);
        }

        float LengthSquared() const
        {
            return x * x + y * y;
        }

        Vector2 Normalized() const
        {
            float len = Length();

            if (len == 0.0f)
                return {};

            return *this / len;
        }

        static float Dot(const Vector2& a, const Vector2& b)
        {
            return a.x * b.x + a.y * b.y;
        }
    };

}