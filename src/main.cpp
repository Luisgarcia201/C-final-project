#include <iostream>
#include "GameEngine.h"

int main() {
    std::cout << "Enter your name: ";
    std::string playerName;
    std::cin >> playerName;

    GameEngine game(6);
    game.play();

    return 0;
}