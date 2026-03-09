#include "Camera.h"

Camera::Camera() {
	myView = View(FloatRect({ 0, 0 }, { win_width, win_heigt }));
}

void Camera::centerView(GameObject* myObject) {
	center = { myObject->pos.x + myObject->size.x / 2, myObject->pos.y + myObject->size.y / 2 };
	myView.setCenter(center);
}

void Camera::setCamera(RenderWindow* window) {
	window->setView(myView);
}
