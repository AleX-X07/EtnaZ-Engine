#pragma once
#include "GameState.h"
#include "GameObject.h"

class MainMenu;

class Game : public GameState
{
private:
	vector<GameObject*> gameObject;
	bool gOBuild;
public:
	Game() = default;
	Game(RenderWindow * window, vector<GameState*>* states);
	~Game() = default;
		
	static void Instance(RenderWindow* window, vector<GameState*>*& states);

	void setEntity();

	virtual void manageState() override;
	virtual void update(float& dt) override;
	virtual void render() override;
};

