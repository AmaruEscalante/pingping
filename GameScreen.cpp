//
// Created by amaru on 5/7/20.
//

#include "GameScreen.h"

GameScreen::GameScreen(int w, int h, sf::RenderWindow *wnd) {
    width = w;
    height = h;
    window = wnd;
    player1 = new Player(10,window->getSize().y/2-50, 10, 50, wnd);
    player2 = new Player(window->getSize().x-10*2,window->getSize().y/2-50, 10, 50, wnd);
    //window->getSize().x - 10 - width
}

void GameScreen::draw() {
    player1->draw();
    player2->draw();
//    ball->draw();
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

            default:
                break;
        }
    }
}

GameScreen::~GameScreen() {
    delete player1;
    delete player2;
}
