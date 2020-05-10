//
// Created by amaru on 5/7/20.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include "Player.h"

Player::Player(int width, int height,
        sf::RenderWindow *window):
        Figure(width, height, window) {
    rectangle.setSize(sf::Vector2f(width, height));
    rectangle.setFillColor(sf::Color::White);
}

void Player::draw() {
    rectangle.setPosition(pos_x, pos_y);
    window->draw(rectangle);
}

void Player::go_up() {
    if(pos_y - des_y > 0){
        pos_y-=des_y;
    }
}

void Player::go_down() {
    if(pos_y + height < 500){
        pos_y+= des_y;
    }
}

void Player::move() {

}

