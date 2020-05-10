//
// Created by amaru on 5/7/20.
//

#ifndef PINGPONG_GAMESCREEN_H
#define PINGPONG_GAMESCREEN_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Player.h"
#include "Ball.h"
#include <SFML/Window/Event.hpp>

class GameScreen {
private:
    int width;
    int height;
    sf::RenderWindow* window;
    Player* player1;
    Player* player2;
    Ball* ball;
public:
    GameScreen(int w, int h, sf::RenderWindow* wi);
    void draw();
    void refresh(sf::Event e);

    ~GameScreen();

};


#endif //PINGPONG_GAMESCREEN_H
