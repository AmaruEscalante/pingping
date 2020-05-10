//
// Created by amaru on 5/10/20.
//

#ifndef LILO_MAR2020_FIGURE_H
#define LILO_MAR2020_FIGURE_H


#include <SFML/Graphics/RenderWindow.hpp>

class Figure {
    friend bool collision_exists(Figure& fig_a, Figure& fig_b);
protected:
    int pos_x;
    int pos_y;
    int width;
    int height;
    int des_x;
    int des_y;
    sf::RenderWindow* window;
public:
    Figure(int width, int height,
            sf::RenderWindow *window);
    virtual void draw() = 0;
    virtual void move() = 0;
    void set_position(int x, int y);
};


#endif //LILO_MAR2020_FIGURE_H
