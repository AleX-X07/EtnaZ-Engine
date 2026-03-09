#include "Player.h"

Player::Player(float x, float y) : Player(x, y, 50, 50) {

}

Player::Player(float x, float y, float w, float h) : GameObject(x, y, w, h), speed(400.0f) {

}


void Player::setSpeed(float nSpeed) {
	speed = nSpeed;
}

void Player::controlKeayboard(float& dt, Input& input) {
    if (Keyboard::isKeyPressed(Keyboard::Key::Z)) {
        pos.y -= speed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::Q)) {
        pos.x -= speed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
        pos.y += speed * dt;
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
        pos.x += speed * dt;
    }
}

void Player::update(float& dt, Input& input) {
	controlKeayboard(dt, input);
	setPos(pos);
}

void Player::render(RenderWindow* window) {
	GameObject::render(window);
}


sf::View