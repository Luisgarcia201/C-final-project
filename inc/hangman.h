#ifndef HANGMAN_H
#define HANGMAN_H

#include <vector>
#include <string>

class Hangman {
private:
    std::string wordToGuess;
    std::string displayWord;
    std::vector<char> guessedLetters;
    int incorrectGuesses;

public:
    Hangman(std::string word);

    void updateDisplayWord(char guess);
    bool isWordGuessed();
    void displayWordState();
    int getIncorrectGuesses();
    std::vector<char> getGuessedLetters();
    std::string getWord();

};

#endif