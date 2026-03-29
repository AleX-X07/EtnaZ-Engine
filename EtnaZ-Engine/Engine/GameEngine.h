#pragma once
#include "../Scene/GameState.h"
#include "SFML/Graphics.hpp"
#include "../Scene/Menu.h"

class GameEngine {
public:
    // Static variable
    static sf::RenderWindow* window;
    static std::vector<GameState*> states;
    static std::vector<GameState*> activeStates;
    
private:
    // Variable
    sf::Clock clock;
    float dt;

public:
    
    // Constructor/Destructor
    GameEngine();
    ~GameEngine();
    
    // Update
    void updateEvent();
    void updateTime();
    void update();
    
    //render
    void render();
    
    // main loop
    void run();
};
