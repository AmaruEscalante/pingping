//
// Created by amaru on 5/7/20.
//

#ifndef PINGPONG_PLAYER_H
#define PINGPONG_PLAYER_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Figure.h"

class Player: public Figure {
private:
    int score;
    sf::RectangleShape rectangle;
public:
    Player(int pos_x, int pos_y, int width, int height, sf::RenderWindow *window);
    void draw() override;
    void move() override;
    void go_up();
    void go_down();
};


#endif //PINGPONG_PLAYER_H
