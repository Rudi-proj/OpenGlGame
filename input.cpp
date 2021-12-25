#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "input.hpp"

namespace Input
{
    std::map<int, bool> keyPressedMap;
}


void Input::keyPressedCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if(keyPressedMap.find(key) != keyPressedMap.end() && action == GLFW_PRESS)
    {
        //key is in map
        std::cout << "Key " << key <<" in map\n";
    }
}

void Input::initMap()
{
    keyPressedMap[GLFW_KEY_ESCAPE] = false;
    keyPressedMap[GLFW_KEY_F1] = false;
}