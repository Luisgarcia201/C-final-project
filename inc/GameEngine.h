// GameEngine.h
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <string>
#include <vector>
#include "hangman.h"  // Include hangman class for interacting with the game

enum GameState { ONGOING, WON, LOST };  // Game states

// Forward declaration of Hangman class
class Hangman;

class GameEngine {
private:
    Hangman* hangmanGame; // Pointer to Hangman class for managing the game
    int maxAttempts;  // Max number of incorrect guesses

public:
    GameEngine(int attempts = 6);  // Constructor to initialize the game engine. A total of 6 attempts.
    void play();  // Method to start the game
    void displayCurrentState();  // Method to display the current game state
    void handlePlayerGuess(char guess);  // Method to handle player input
    bool isGameOver();  // Check if the game is over
};

#endif  // GAMEENGINE_H

