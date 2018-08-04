cmake_minimum_required(VERSION 3.10)
project(glfw VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(Epoxy REQUIRED)
find_package(glfw3 3.2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glm)

add_executable(glfw_proj
    main.cpp
    Cube.hpp
    Cube.cpp
    Triangle.cpp
    Triangle.hpp
    Shader.hpp
)

target_link_libraries(glfw_proj PRIVATE OpenGL::OpenGL OpenGL::GLU glfw epoxy::gl glm)