#ifndef GAMEENGINE_H
#define GAMEENGINE_H

class GameEngine {
    public:
    GameEngine();
    ~GameEngine();

    void setGameState(bool state);

    private:
    bool game_state; // stores if game is running
};


#endif