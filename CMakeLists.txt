cmake_minimum_required(VERSION 3.17)

project(myGame)
include_directories(include/)
add_executable(${PROJECT_NAME} glad.c main.cpp input.cpp)
target_link_libraries(${PROJECT_NAME} GL dl glfw)
