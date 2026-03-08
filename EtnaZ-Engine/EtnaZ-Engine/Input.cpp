#include "Input.h"

Input::Input() : key(nullptr), mouse(nullptr) {
	
}

Input::~Input() {
	delete key;
	key = nullptr;

	delete mouse;
	mouse = nullptr;
}


void Input::getEvent(Event* event) {
	key = event->getIf<Event::KeyPressed>();
	mouse = event->getIf<Event::MouseButtonPressed>();
}

const Event::KeyPressed* Input::getKey() {
	return key;
}

const Event::MouseButtonPressed* Input::getMouse() {
	return mouse;
}