#include "Game.h"

#include <SFML/Window/Keyboard.hpp>

#include "../Engine/GameEngine.h"

Game* Game::instance = nullptr;

Game::Game() {
    
}

Game::~Game() {
    
}

GameState* Game::getInstance() {
    if (instance == nullptr) {
        instance = new Game();
    }
    return instance;
}

void Game::manageState() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
        nextState();
        GameEngine::activeStates.push_back(Menu::getInstance());
    }
}

void Game::update(float& dt) {
    
}

void Game::render() {
    std::cout << "Game" << std::endl;
}
