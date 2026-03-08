#pragma once
#include "Globals.h"

class Input
{
private:
	const Event::KeyPressed* key;
	const Event::MouseButtonPressed* mouse;

public:
	Input();
	~Input();

	void getEvent(Event* event);
	const Event::KeyPressed* getKey();
	const Event::MouseButtonPressed* getMouse();
};

