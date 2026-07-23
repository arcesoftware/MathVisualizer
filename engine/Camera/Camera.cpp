#include "Camera.h"


namespace mv
{


    Camera::Camera()
        :
        m_Position(0.0f, 0.0f, 5.0f),
        m_Target(0.0f, 0.0f, 0.0f),
        m_Up(0.0f, 1.0f, 0.0f)
    {

    }


    Camera::~Camera()
    {

    }


    void Camera::SetPosition(const glm::vec3& position)
    {
        m_Position = position;
    }


    void Camera::SetTarget(const glm::vec3& target)
    {
        m_Target = target;
    }


    glm::vec3 Camera::GetPosition() const
    {
        return m_Position;
    }


    glm::vec3 Camera::GetTarget() const
    {
        return m_Target;
    }


    glm::mat4 Camera::GetViewMatrix() const
    {
        return glm::lookAt(
            m_Position,
            m_Target,
            m_Up
        );
    }


    glm::mat4 Camera::GetProjectionMatrix(float width, float height) const
    {
        float aspect = width / height;

        return glm::perspective(
            glm::radians(45.0f),
            aspect,
            0.1f,
            100.0f
        );
    }


}