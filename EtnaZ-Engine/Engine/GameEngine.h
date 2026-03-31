#pragma once
#include "SFML/Graphics.hpp"
#include "../Engine/GameState.h"
#include "Tool/Input.h"
#include "../Scene/Menu.h"

class GameEngine {
public:
    // Static variable
    static sf::RenderWindow* window;
    // Vector for states in pause
    static std::vector<GameState*> states;
    // Vector for current states
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
