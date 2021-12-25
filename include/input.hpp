#pragma once

#include <GLFW/glfw3.h>
#include <map>
#include "window.hpp"


namespace Input
{
    extern std::map<int, bool> keyPressedMap;
    void initMap();

    void keyPressedCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

    bool isKeyPressed(int key);

    void handleKeyboardInput(GameWindow* window);
}