#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "input.h"

void Input::keyPressedCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_X && action == GLFW_PRESS)
    {
        std::cout << "Key pressed\n";
    }
}
