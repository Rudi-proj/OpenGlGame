#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	if(!glfwInit())
	{
		std::cout << "Failed GLFW init" << "\n";
		return -1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	const int windowHeight = 500;
	const int windowWidth = 500;
	const char* windowTitle = "myGame";

	GLFWwindow* window = glfwCreateWindow(
		windowWidth,
		windowHeight,
		windowTitle,
		nullptr,
		nullptr
	);
	if(nullptr == window)
	{
	std::cout << "Failed to create window." << "\n";
	glfwTerminate();
	return -1;
	}

	glfwMakeContextCurrent(window);

	if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
	std::cout << "Failed to init Glad.\n";
	return -1;
	}

	glViewport(0,0, windowWidth, windowHeight);
	while(!glfwWindowShouldClose(window))
	{
		glClearColor(250.0f / 255.0f, 119.0f / 255.0f, 110.0f / 255.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();

	std::cout << "Game terminated." << "\n";
	return 0;
}
