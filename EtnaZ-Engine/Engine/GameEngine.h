#pragma once
#include "SFML/Graphics.hpp"

class GameEngine {
private:
    static sf::RenderWindow* window;
    
public:
    GameEngine();
    ~GameEngine();
    
    void updateEvent();
    void updateTime();
    void update();
    void render();
    void run();
};
