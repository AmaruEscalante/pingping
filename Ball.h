//
// Created by amaru on 5/7/20.
//

#ifndef PINGPONG_BALL_H
#define PINGPONG_BALL_H


#include <SFML/Graphics/RenderWindow.hpp>

class Ball {
private:
    float pos_x;
    float pos_y;
    float width;
    float height;
    float des_x;
    float des_y;
    sf::RenderWindow* window;
public:
    Ball();
    void draw();
    void move();
};


#endif //PINGPONG_BALL_H
