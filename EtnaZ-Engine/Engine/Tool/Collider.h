#pragma once
#include <SFML/Graphics/RectangleShape.hpp>

class GameObject;

class Collider {
private:
   sf::RectangleShape rect;
   GameObject* owner;
   
public:
   Collider(GameObject* owner);
   ~Collider() = default;
   
   bool isColliding(GameObject* target);
   void resolveCollisionPlatformer(GameObject* target);
   void resolveCollisionRPG(GameObject* target);
   
   void updateCollider(GameObject* target);
};
