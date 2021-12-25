# include "window.hpp"
#include "input.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

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
    }
    glfwTerminate();

    std::cout << "Game terminated."
              << "\n";
}