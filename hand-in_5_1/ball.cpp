#include "ball.h"

Ball::Ball(){}
Ball::Ball(double *x, double *y)
{
    this->x = x;
    this->y = y;
}

void Ball::DrawMe()
{
    sf::CircleShape circle(10);
    circle.setFillColor(sf::Color(0,0,0));
}