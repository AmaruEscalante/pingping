//
// Created by amaru on 5/7/20.
//

#include "Player.h"

Player::Player(float x, float y, float w, int s, float dx, float dy, sf::RenderWindow *wnd) {

}

void Player::draw() {

}

void Player::go_up() {
    if(pos_y - des_y > 0){
        pos_y-=des_y;
    }
}

void Player::go_down() {
    if(pos_y + height )
}
