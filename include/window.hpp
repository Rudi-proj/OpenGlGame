#pragma once

class GameWindow
{
public:    
    GameWindow();
    ~GameWindow();

    int initGlfw();
    int createWindow();
    void gameLoop();

    bool isFullscreen();
    void setFullscreen(bool fullscreen);

    void destroyWindow();

protected:

private:
	const int windowHeight = 500;
	const int windowWidth = 500;
	const char *windowTitle = "myGame";
    GLFWwindow* window;
    bool isFullscreenMode = false;
};