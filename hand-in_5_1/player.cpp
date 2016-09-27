//
// Created by Nystad on 25.09.2016.
//

#include "player.h"

int height = 100;
int width = 10;

Player::Player() {}
Player::Player(double *startX, double *startY)
{
    this->height = height;
    this->width = width;
    this->x = startX;
    this->y = startY;
}
