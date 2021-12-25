#pragma once

#include <GLFW/glfw3.h>
#include <map>
#include "window.hpp"


namespace Input
{
    typedef struct
    {
        double xPos;
        double yPos;
    } cursorPosition;

    extern cursorPosition cursorPositionUpdated;
    extern std::map<int, bool> keyPressedMap;

    void initMap();

    void keyPressedCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
    void cursorPositionCallback(GLFWwindow* window, double xpos, double ypos);

    bool isKeyPressed(int key);

    void handleKeyboardInput(GameWindow* window);


    namespace Helper
    {
        void printCursorPos();
    }
}
