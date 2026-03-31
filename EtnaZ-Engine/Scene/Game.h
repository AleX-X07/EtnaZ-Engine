#pragma once
#include <iostream>

#include "../Engine/GameState.h"
#include "../Engine/Object/GameObject.h"
#include "../Entity/Player.h"

class Game : public GameState {

private:
    // Variable for scene
    Game();
    
    static Game * instance;
private:
    // Object in my scene
    Player* myPlayer;
    GameObject* myGameObject;
    
public:
    virtual ~Game() override;
    
    static GameState* getInstance();
    
    virtual void manageState() override;
    virtual void update(float& dt) override;
    virtual void render() override;
};
