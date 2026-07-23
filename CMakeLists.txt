cmake_minimum_required(VERSION 3.20)

project(
    MathVisualizer
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# SDL3
add_subdirectory(
    external/SDL3
)

set(SOURCES

    src/main.cpp

    engine/Core/Application.cpp
    engine/Core/Window.cpp
    engine/Core/Time.cpp
    engine/Renderer/Renderer.cpp

    engine/Physics/ParticleSystem.cpp

)


add_executable(
    MathVisualizer
    ${SOURCES}
 "engine/Physics/Particle.h" "engine/Core/Time.h" "engine/Physics/PhysicsEngine.h" "Scene/Scene.h" "Scene/Scene.cpp" "Camera/Camera.h")

add_custom_command(TARGET MathVisualizer POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:SDL3::SDL3-shared>
    $<TARGET_FILE_DIR:MathVisualizer>
)

target_include_directories(
    MathVisualizer

    PRIVATE

    engine
)


target_link_libraries(
    MathVisualizer

    PRIVATE

    SDL3::SDL3
)

