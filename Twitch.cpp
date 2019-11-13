#include <iostream>
#include "Engine.h"



int main(){

    game::Engine engine;
    engine.Initialize("test");
    while(1)
    {
        engine.Update();
        engine.Render();
    }
    
    std::cout << "Hello Twitch" << std::endl;
    
}