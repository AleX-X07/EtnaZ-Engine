#include "Game.h"

#include <SFML/Window/Keyboard.hpp>

#include "../../Engine//GameEngine.h"

Game* Game::instance = nullptr;

Game::Game() {
    Player* myPlayer = new Player(500,500,100,100);
    GameObject* myGameObject = new GameObject(1000,500,100,100);
    
    myPlayer->setColor(sf::Color::Red);
    myGameObject->setColor(sf::Color::White);
    
    Collider* myCollider = new Collider(myPlayer);
    myPlayer->setCollider(myCollider);
    
    entity.push_back(myGameObject);
    entity.push_back(myPlayer);
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
    collisions();
    for (auto& e : entity) {
        e->update(dt);
    }
}

void Game::render() {
    for (auto& e : entity) {
        e->render();
    }
}

void Game::collisions() {
    for (auto& e : entity) {
        if (e->getCollider() != nullptr) {
            for (auto& ohterE : entity) {
                if (e != ohterE) {
                    if (e->getCollider()->isColliding(ohterE)) {
                        std::cout << "Collision ! " << std::endl;
                    }
                }   
            }   
        }
    }
}
