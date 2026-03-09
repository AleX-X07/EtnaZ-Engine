#pragma once
#include "Globals.h"
#include "GameObject.h"

class Camera
{
private:
	View myView;
	Vector2f center;

public:
	Camera();
	~Camera() = default;

	void centerView(GameObject* myObject);
	void setCamera(RenderWindow* window);
};
