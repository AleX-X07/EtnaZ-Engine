#include "GameState.h"
#include "../Engine/GameEngine.h"

void GameState::nextState() {
    if (!GameEngine::activeStates.empty()) {
        GameEngine::activeStates.pop_back();
    }
}

void GameState::pause() {
    if (!GameEngine::activeStates.empty()) {
        GameEngine::states.push_back(GameEngine::activeStates.back());
        GameEngine::activeStates.pop_back();
    }
}

void GameState::resume() {
    if (!GameEngine::activeStates.empty()) {
        GameEngine::activeStates.pop_back();
        GameEngine::activeStates.push_back(GameEngine::states.back());
    }
}
