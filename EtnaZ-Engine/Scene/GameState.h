#pragma once

class GameEngine;

class GameState
{
protected:
    GameState() = default;
    
public:
    virtual ~GameState() = default;
    
    void nextState();
    void pause();
    void resume();
    
    virtual void manageState() = 0;
    virtual void update(float& dt) = 0;
    virtual void render() = 0;
};
