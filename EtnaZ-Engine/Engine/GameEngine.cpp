#include "GameEngine.h"

sf::RenderWindow* GameEngine::window = nullptr;

GameEngine::GameEngine() {
    window = new sf::RenderWindow(sf::VideoMode({1920,1080}), "EtnaZ-Engine");
    
}

GameEngine::~GameEngine() {
    delete window;
    window = nullptr;
}

void GameEngine::updateEvent() {
    while (const std::optional event = window->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window->close();
        }
    }
}

void GameEngine::updateTime() {
    sf::Time elapsed = clock.getElapsedTime();
    clock.restart();
    dt = elapsed.asSeconds();
}

void GameEngine::update() {
    
}

void GameEngine::render() {
    
}

void GameEngine::run() {
    while (window->isOpen()) {
        updateEvent();
        updateTime();
        update();
        render();
        window->display();
    }
}

