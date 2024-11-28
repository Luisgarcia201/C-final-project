// hangman.cpp
#include "hangman.h"
#include <iostream>

Hangman::Hangman(std::string word) : wordToGuess(word), incorrectGuesses(0) {
    displayWord = std::string(word.length(), '_');  // Initialize the display word with underscores
}

void Hangman::updateDisplayWord(char guess) {
    bool correctGuess = false;
    for (size_t i = 0; i < wordToGuess.length(); ++i) {
        if (wordToGuess[i] == guess) {
            displayWord[i] = guess;
            correctGuess = true;
        }
    }
    if (!correctGuess) {
        incorrectGuesses++;
    }
}

bool Hangman::isWordGuessed() {
    return displayWord == wordToGuess;
}

void Hangman::displayWordState() {
    std::cout << "Current word: " << displayWord << std::endl;
}

int Hangman::getIncorrectGuesses() {
    return incorrectGuesses;
}

std::vector<char> Hangman::getGuessedLetters() {
    return guessedLetters;
}

std::string Hangman::getWord() {
    return wordToGuess;
}