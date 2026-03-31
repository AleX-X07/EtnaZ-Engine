#pragma once
#include "../Engine/Object/GameObject.h"

class Player : public GameObject {
private:
    float speed;
public:
    Player();
    Player(float x, float y);
    Player(float x, float y, float w, float h);
    virtual ~Player() override = default;
    
    float getSpeed();
    
    void setSpeed(float nSpeed);
    
    void controllKeyboard();
    
    virtual void update(float& dt) override;
    virtual void render() override;
    
};
