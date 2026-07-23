# MathVisualizer

A real-time C++ mathematical visualization engine built from scratch using **C++**, **CMake**, and **SDL3**.

The goal of this project is to create a lightweight visualization framework capable of rendering mathematical concepts, physics simulations, and interactive graphics while learning and applying game engine architecture concepts.

---

## Features

Current features:

- ✅ Custom C++ application framework
- ✅ SDL3 window management
- ✅ Real-time rendering loop
- ✅ Delta time and FPS tracking
- ✅ Particle system simulation
- ✅ Basic physics integration
- ✅ CMake-based build system
- ✅ Modular engine architecture

---

## Project Structure
MathVisualizer/
│
├── engine/
│ ├── Core/
│ │ ├── Application
│ │ ├── Window
│ │ └── Time
│ │
│ ├── Renderer/
│ │ └── Renderer
│ │
│ └── Physics/
│ ├── Particle
│ └── ParticleSystem
│
├── Scene/
│ └── Scene management
│
├── src/
│ └── main.cpp
│
├── external/
│ └── SDL3
│
├── assets/
│
├── CMakeLists.txt
│
└── README.md






---

# Requirements

## Supported Platform

Currently developed and tested on:

- Windows 11
- Visual Studio
- CMake
- SDL3

---

## Dependencies

### C++

Required:

- C++17 or newer
- Visual Studio 2022/2026
- CMake 3.20+

### SDL3

This project uses SDL3 for:

- Window creation
- Input handling
- Rendering backend

SDL3 is included under: external/SDL3


---

# Building the Project

## Clone Repository

```bash
git clone https://github.com/arcesoftware/MathVisualizer.git

cd MathVisualizer
