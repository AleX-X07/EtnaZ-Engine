#include "Player.h"

Player::Player() : Player(0,0,50,50) {
    
}

Player::Player(float x, float y) : Player(x,y,50,50) {
    
}

Player::Player(float x, float y, float w, float h) : GameObject(x,y,w,h) {
    speed = 400.0f;
}

float Player::getSpeed() {
    return speed;
}

void Player::setSpeed(float nSpeed) {
    speed = nSpeed;
}

void Player::controllKeyboard() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z)) {
        pos.y -= speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        pos.y += speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q)) {
        pos.x -= speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        pos.x += speed;
    }
    setPos(pos);
}

void Player::update(float& dt) {
    controllKeyboard();
}

void Player::render() {
    GameObject::render();
}
