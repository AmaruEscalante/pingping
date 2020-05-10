//
// Created by amaru on 5/7/20.
//

#include "Game.h"

Game::Game(int x, int y, int w, int h) {
    pos_x = x;
    pos_y = y;
    width = w;
    height = h;
    window.create(sf::VideoMode(width, height), "Course Lilo March 2020");
    window.setPosition({pos_x, pos_y});
    gamescreen = new GameScreen(width, height, &window);
}

Game::~Game() {
    delete gamescreen;
}

void Game::execute() {

}
