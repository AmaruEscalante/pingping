//
// Created by amaru on 5/10/20.
//

#include "Figure.h"

Figure::Figure(int w, int h, sf::RenderWindow *wdn) {
    pos_x = 0;
    pos_y = 0;
    des_x = 0;
    des_y = 0;
    width = w;
    height = h;
    window = wdn;
}

void Figure::set_position(int x, int y) {
    pos_x = x;
    pos_y = y;
}

bool collision_exists(Figure &fig_a, Figure &fig_b) {
    Figure* pfig_a = &fig_a;
    Figure* pfig_b = &fig_b;

    int arriba_a = pfig_a->pos_y;
    int arriba_b = pfig_b->pos_y;
    int abajo_a = arriba_a + pfig_a->height;
    int abajo_b = arriba_b + pfig_b->height;

    int izquierda_a = pfig_a->pos_x;
    int izquierda_b = pfig_b->pos_x;
    int derecha_a = izquierda_a + pfig_a->width;
    int derecha_b = izquierda_b + pfig_b->width;

    return !(arriba_a > abajo_b ||
             arriba_b > abajo_a ||
             izquierda_a > derecha_b ||
             izquierda_b > derecha_a);
}
