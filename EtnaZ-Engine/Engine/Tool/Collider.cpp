#include "Collider.h"
#include "../Object/GameObject.h"

Collider::Collider(GameObject* _owner) {
    owner = _owner;
}

sf::RectangleShape& Collider::getBoxCollider() {
    return rect;
}

void Collider::setBoxColliderPos(sf::Vector2f nBoxPos) {
    
}

void Collider::setBoxColliderSize(sf::Vector2f nBoxSize) {
    rect.setSize(nBoxSize);
}

bool Collider::isColliding(GameObject* target) {
    if (owner->getPos().x < target->getPos().x + target->getSize().x && 
        owner->getPos().x + owner->getSize().x > target->getPos().x && 
        owner->getPos().y < target->getPos().y + target->getSize().y &&
        owner->getPos().y + owner->getSize().y > target->getPos().y) {
        return true;    
    }
    return false;
}

void Collider::resolveCollision(GameObject* target) {
    float minX = target->getPos().x;
    float maxX = target->getPos().x + target->getSize().x;
    
    
}

void Collider::updateCollider(GameObject* target) {
    isColliding(target);
}

