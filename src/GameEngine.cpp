
#include "GameEngine.h"
#include <iostream>
#include <algorithm>
#include "hangman.h"  // Include Hangman header

// Constructor
GameEngine::GameEngine(int attempts) : maxAttempts(attempts) {
    hangmanGame = new Hangman("codingisfun");  // Initialize Hangman game with word "codingisfun"
}

// Method to display the current state of the game
void GameEngine::displayCurrentState() {
    hangmanGame->displayWordState();
    std::cout << "Incorrect guesses: " << hangmanGame->getIncorrectGuesses() 
              << "/" << maxAttempts << std::endl;
}

// Method to handle the player's guess
void GameEngine::handlePlayerGuess(char guess) {
    if (std::find(hangmanGame->getGuessedLetters().begin(), 
                  hangmanGame->getGuessedLetters().end(), guess) != hangmanGame->getGuessedLetters().end()) {
        std::cout << "You've already guessed that letter!" << std::endl;
    } else {
        hangmanGame->updateDisplayWord(guess);
    }
}

// Method to check if the game is over
bool GameEngine::isGameOver() {
    if (hangmanGame->isWordGuessed()) {
        std::cout << "Congratulations, you won!" << std::endl;
        return true;
    } else if (hangmanGame->getIncorrectGuesses() >= maxAttempts) {
        std::cout << "Sorry, you lost. The word was: " << hangmanGame->getWord() << std::endl;
        return true;
    }
    return false;
}

// Method to start the game (main game loop)
void GameEngine::play() {
    while (!isGameOver()) {
        displayCurrentState();
        std::cout << "Guess a letter: ";
        char guess;
        std::cin >> guess;
        handlePlayerGuess(guess);
    }
}