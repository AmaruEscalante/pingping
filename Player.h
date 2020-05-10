//
// Created by amaru on 5/7/20.
//

#ifndef PINGPONG_PLAYER_H
#define PINGPONG_PLAYER_H

#include <SFML/Graphics/RenderWindow.hpp>

class Player {
private:
    float pos_x;
    float pos_y;
    float width;
    float height;
    int score;
    float des_x;
    float des_y;
    sf::RenderWindow* window;
public:
    Player(float x, float y, float w, float height, int s, float dx, float dy,
            sf::RenderWindow* wnd);
    void draw();
    void go_up();
    void go_down();
};


#endif //PINGPONG_PLAYER_H
