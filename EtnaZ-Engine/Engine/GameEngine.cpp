#include "GameEngine.h"

GameEngine::GameEngine() {
    window = new sf::RenderWindow(sf::VideoMode::getDesktopMode(), "EtnaZ-Engine", sf::Style::Default, sf::State::Fullscreen());
    
}

GameEngine::~GameEngine() {
    delete window;
    window = nullptr;
}

void GameEngine::updateEvent() {
    
}

void GameEngine::updateTime() {
    
}

void GameEngine::update() {
    
}

void GameEngine::render() {
    
}

void GameEngine::run() {
    updateEvent();
    updateTime();
    update();
    render();
    window->display();
}

