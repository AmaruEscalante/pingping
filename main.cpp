#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Game.cpp"
#include "Ball.h"
#include "GameScreen.h"
#include "GameScreen.cpp"
#include "Player.h"
#include "Player.cpp"
#include "Figure.h"
#include "Figure.cpp"



int main()
{
    /* sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }*/
//   Game game(400, 100, 10, 20);
    Game pong(2500,500,800,400);
    pong.execute();


    return 0;
}