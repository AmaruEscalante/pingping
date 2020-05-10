//
// Created by amaru on 5/7/20.
//

#ifndef PINGPONG_GAME_H
#define PINGPONG_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "GameScreen.h"

class Game {
private:
    int pos_x;
    int pos_y;
    int width;
    int height;
    sf::RenderWindow window;
    GameScreen* gamescreen;
public:
    Game(int x, int y, int w, int h);
    ~Game();
    void execute();
};


#endif //PINGPONG_GAME_H
