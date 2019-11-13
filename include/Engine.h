#ifndef ENGINE_H
#define ENGINE_H

#include "GLFW/glfw3.h"  //add


#pragma comment(lib,"opengl32.lib")

namespace game
{

class Engine
{
public:
    static int SCREEN_WIDTH;
    static int SCREEN_HEIGHT;

    Engine();
    ~Engine();

    bool Initialize(const char* windowTitle);

    void Update();
    void Render();

private:
    static GLFWwindow* window;

};

}

#endif 