#include "Camera.h"
#include "GameObject.h"

Camera::Camera(int zoom) {
	camera.setPosition({0,0});
	camera.setSize({ win_width, win_heigt });
}

void Camera::setCamera(GameObject* Owner) {
	targetPos = { ((Owner->pos.x + Owner->size.x / 2) - win_width / 2) , ((Owner->pos.y + Owner->size.y / 2) - win_heigt / 2)};
}
