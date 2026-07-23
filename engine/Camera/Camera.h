#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


namespace mv
{

    class Camera
    {

    public:

        Camera();

        ~Camera();


        void SetPosition(const glm::vec3& position);

        void SetTarget(const glm::vec3& target);


        glm::vec3 GetPosition() const;

        glm::vec3 GetTarget() const;


        glm::mat4 GetViewMatrix() const;

        glm::mat4 GetProjectionMatrix(float width, float height) const;


    private:

        glm::vec3 m_Position;

        glm::vec3 m_Target;

        glm::vec3 m_Up;

    };


}