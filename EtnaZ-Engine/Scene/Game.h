#pragma once
#include <iostream>

#include "../Scene/GameState.h"

class Game : public GameState {

private:
    Game();
    
    static Game * instance;
    
public:
    virtual ~Game() override;
    
    static GameState* getInstance();
    
    virtual void manageState() override;
    virtual void update(float& dt) override;
    virtual void render() override;
};
