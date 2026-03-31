#include "Game.h"

#include <SFML/Window/Keyboard.hpp>

#include "../Engine/GameEngine.h"

Game* Game::instance = nullptr;

Game::Game() {
    myPlayer = new Player(500,500,100,100);
    myGameObject = new GameObject(1000,500,100,100);
    
    myPlayer->setColor(sf::Color::Red);
    myGameObject->setColor(sf::Color::White);
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
    myPlayer->update(dt);
}

void Game::render() {
    myPlayer->render();
    myGameObject->render();
}
