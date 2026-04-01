#include "Collider.h"
#include "../Object/GameObject.h"

Collider::Collider(GameObject* _owner) {
    owner = _owner;
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

void Collider::resolveCollisionPlatformer(GameObject* target) {
    
}

void Collider::resolveCollisionRPG(GameObject* target) {
    
}

void Collider::updateCollider(GameObject* target) {
    isColliding(target);
}

