#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "input.hpp"
#include "window.hpp"

int main()
{
	GameWindow gWindow;

	gWindow.initGlfw();
	gWindow.createWindow();
	gWindow.gameLoop();

	return 0;
}
