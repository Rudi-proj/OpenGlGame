#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "input.hpp"
#include "window.hpp"

namespace Input
{
    bool keyPressedData[GLFW_KEY_LAST] = {};
    cursorPosition cursorPositionUpdated = {
        .xPos = 0.0f,
        .yPos = 0.0f,
    };
}


void Input::keyPressedCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if(key > 0 && key < GLFW_KEY_LAST && action == GLFW_PRESS)
    {
        keyPressedData[key] = true;
    }
    else if(key > 0 && key < GLFW_KEY_LAST && action == GLFW_RELEASE)
    {
        keyPressedData[key] = false;
    }
}

void Input::cursorPositionCallback(GLFWwindow* window, double xpos, double ypos)
{
    cursorPositionUpdated.xPos = xpos;
    cursorPositionUpdated.yPos = ypos;
    Helper::printCursorPos();
}

bool Input::isKeyPressed(int key, bool resetKey)
{
    bool isPressed = keyPressedData[key];    

    if(resetKey)
    {
        keyPressedData[key] = false;
    }

    return isPressed;
}

void Input::handleKeyboardInput(GameWindow* window)
{
    if(isKeyPressed(GLFW_KEY_E))
    {
        std::cout << "E key Pressed" << std::flush;
    }

    if(isKeyPressed(GLFW_KEY_X) && isKeyPressed(GLFW_KEY_LEFT_CONTROL))
    {
        window->closeWindow();
    }

    if(isKeyPressed(GLFW_KEY_F1))
    {
        window->toggleFullscreen();
    }
}

void Input::Helper::printCursorPos()
{
    std::cout << Input::cursorPositionUpdated.xPos << " / " << Input::cursorPositionUpdated.yPos << "\n" << std::flush;
}