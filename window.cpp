#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "window.hpp"
#include "input.hpp"

GameWindow::GameWindow()
{

}

GameWindow::~GameWindow()
{

}

int GameWindow::initGlfw()
{
    if (!glfwInit())
    {
        std::cout << "Failed GLFW init"
                  << "\n";
        return -1;
    }
    return 0;
}

int GameWindow::createWindow()
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(
		windowWidth,
		windowHeight,
		windowTitle,
		nullptr,
		nullptr);
	if (nullptr == window)
	{
		std::cout << "Failed to create window."
				  << "\n";
		glfwTerminate();
		return -1;
	}
    	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to init Glad.\n";
		return -1;
	}

	glfwSetKeyCallback(window, Input::keyPressedCallback);
	glfwSetCursorPosCallback(window, Input::cursorPositionCallback);

	glViewport(0, 0, windowWidth, windowHeight);
    return 0;    
}

void GameWindow::gameLoop()
{
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(250.0f / 255.0f, 119.0f / 255.0f, 110.0f / 255.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
        Input::handleKeyboardInput(this);
    }
    glfwTerminate();

    std::cout << "Game terminated."
              << "\n";
}

void GameWindow::setFullscreen(bool fullscreen)
{
	GLFWmonitor *monitor = glfwGetPrimaryMonitor();
	if (monitor == nullptr)
	{
		std::cout << "Monitor returned NULL";
		return;
	}

	if (fullscreen)
	{
		//windowed mode -> put in fullscreen mode
		const GLFWvidmode *mode = glfwGetVideoMode(monitor);
		glfwSetWindowMonitor(window, monitor, 0, 0, mode->width, mode->height, mode->refreshRate);
	}
	else
	{
		//fullscree -> put in windowed mode
		glfwSetWindowMonitor(window, nullptr, 0, 0, windowWidth, windowHeight, GLFW_DONT_CARE);
	}
	isFullscreenMode = fullscreen;
}

void GameWindow::destroyWindow()
{
	glfwDestroyWindow(window);
}

void GameWindow::closeWindow()
{
	glfwSetWindowShouldClose(window, GLFW_TRUE);
}

void GameWindow::toggleFullscreen()
{
	if(isFullscreenMode)
	{
		setFullscreen(false);
	}
	else
	{
		setFullscreen(true);
	}
}