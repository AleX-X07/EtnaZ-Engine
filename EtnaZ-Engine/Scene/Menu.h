#pragma once
#include "GameState.h"

class Menu : public GameState {

private:
    Menu();
    
public:
    virtual ~Menu() override;
    
    static GameState* getMenu();
    
    virtual void manageState() override;
    virtual void update(float& dt) override;
    virtual void render() override;
};
