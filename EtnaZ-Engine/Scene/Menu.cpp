#include "Menu.h"

Menu::Menu() {
    
}

Menu::~Menu() {
    
}

GameState* Menu::getMenu() {
    if (currentInstance == nullptr) {
        currentInstance = new Menu();
        return currentInstance;
    }
    return currentInstance;
}

void Menu::manageState() {
    
}

void Menu::update(float& dt) {
    
}

void Menu::render() {
    
}
