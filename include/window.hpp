#pragma once

class GameWindow
{
    GameWindow();
    ~GameWindow();

public:
    int initGlfw();
    int createWindow();
    void gameLoop();

protected:

private:
	const int windowHeight = 500;
	const int windowWidth = 500;
	const char *windowTitle = "myGame";
    GLFWwindow* window;
};