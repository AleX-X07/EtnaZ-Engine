#pragma once
#include "../Scene/GameState.h"

class Game : public GameState {

private:
    Game();
    
public:
    virtual ~Game() override;
    
    static GameState* getGame();
    
    virtual void manageState() override;
    virtual void update(float& dt) override;
    virtual void render() override;
};
