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
   
   sf::RectangleShape& getBoxCollider();
   void setBoxColliderPos(sf::Vector2f nBoxPos);
   void setBoxColliderSize(sf::Vector2f nBoxSize);
   
   bool isColliding(GameObject* target);
   void resolveCollision(GameObject* target);
   
   void updateCollider(GameObject* target);
};
