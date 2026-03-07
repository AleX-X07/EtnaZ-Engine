#include "Game.h"
#include "MainMenu.h"

Game::Game(RenderWindow* window, vector<GameState*>* _states) : GameState(window, _states), gOBuild(false) {

}

void Game::Instance(RenderWindow* window, vector<GameState*>*& states) {
	GameState* mainMenu = new Game(window, states);
	states->push_back(mainMenu);
}

void Game::manageState() {
	if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
		GameState::nextState(states);
		MainMenu::Instance(window, states);
	}
}


void Game::setEntity() {
	if (!gOBuild) {
		GameObject* testBloc = new GameObject(100, 100, 100, 100);
		gameObject.push_back(testBloc);
		gOBuild = true;
	}
}

void Game::update(float& dt) {
	setEntity();
	for (auto gO : gameObject) {
		gO->update(dt);
	}
}

void Game::render() {
	for (auto gO : gameObject) {
		gO->render(window);
	}
}