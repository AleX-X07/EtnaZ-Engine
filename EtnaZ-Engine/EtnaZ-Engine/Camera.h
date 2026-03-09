#pragma once
#include "Globals.h"

class GameObject;

class Camera
{
private:
	RectangleShape camera;
	Vector2f posC;
	Vector2f targetPos;
	Vector2f screenSize;
	Vector2f levelSize;

public:
	Camera() = default;
	Camera(int zoom);
	~Camera() = default;

	void setCamera(GameObject* Owner);

};

