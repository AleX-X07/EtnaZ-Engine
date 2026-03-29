#include "Game.h"

Game::Game() {
    
}

Game::~Game() {
    
}

GameState* Game::getGame() {
    if (currentInstance == nullptr) {
        currentInstance = new Game();
    }
    return currentInstance;
}

void Game::manageState() {
    
}

void Game::update(float& dt) {
    
}

void Game::render() {
    
}
