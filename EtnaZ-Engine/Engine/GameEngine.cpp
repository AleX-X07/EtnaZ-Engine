#include "GameEngine.h"

sf::RenderWindow* GameEngine::window = nullptr;
std::vector<GameState*> GameEngine::states;
std::vector<GameState*> GameEngine::activeStates;

GameEngine::GameEngine() {
    window = new sf::RenderWindow(sf::VideoMode::getDesktopMode(), "EtnaZ-Engine", sf::Style::Default, sf::State::Windowed);
}

GameEngine::~GameEngine() {
    delete window;
    window = nullptr;
    
    for (auto& aS : activeStates) {
        delete aS;
        aS = nullptr;
    }
    
    for (auto& s : states) {
        delete s;
        s = nullptr;
    }
}

void GameEngine::updateEvent() {
    Input::getInstance()->reset();
    while (const std::optional event = window->pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window->close();
        }
        Input::getInstance()->setEvent(*event);    
    }
}

void GameEngine::updateTime() {
    sf::Time elapsed = clock.getElapsedTime();
    clock.restart();
    dt = elapsed.asSeconds();
}

void GameEngine::update() {
    if (!activeStates.empty()) {
        activeStates.back()->manageState();
        activeStates.back()->update(dt);
    }
}

void GameEngine::render() {
    if (!states.empty()) {
        states.back()->render();
    }
    if (!activeStates.empty()) {
        activeStates.back()->render();
    }
}

void GameEngine::run() {
    
    activeStates.push_back(Menu::getInstance());
    
    while (window->isOpen()) {
        updateEvent();
        updateTime();
        update();
        render();
        window->display();
    }
}

