//
// Created by amaru on 5/7/20.
//

#include "Ball.h"
#include <SFML/Graphics/CircleShape.hpp>

Ball::Ball() {

}

void Ball::draw() {
    sf::CircleShape circ;
    circ.setPosition({pos_x, pos_y});
    circ.setRadius(width/2);
    circ.setFillColor(sf::Color::Blue);
}

void Ball::move() {

}
