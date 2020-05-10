//
// Created by amaru on 5/7/20.
//

#include "GameScreen.h"

GameScreen::GameScreen(int w, int h, sf::RenderWindow *wi) {
    width = w;
    height = h;
    window = wi;
    player1 = new Player(10,10,15,40,0,0,0, window);
    player2 = new Player(window->getSize().x - 10 - width,10,15,40,0,0,0, window);
}

void GameScreen::draw() {
    player1->draw();
    player2->draw();
    ball->draw();
}

void GameScreen::refresh(sf::Event e) {
    if (e.type == sf::Event::KeyPressed)
    {
        switch (e.key.code){
            case sf::Keyboard::W:
                player1->go_up();
                break;

            case sf::Keyboard::S:
                player1->go_down();
                break;

            case sf::Keyboard::Up:
                player2->go_up();
                break;

            case sf::Keyboard::Down:
                player2->go_down();
                break;
        }
    }
}

GameScreen::~GameScreen() {
    delete player1;
    delete player2;
}
