#ifndef HAND_IN_5_1_BALL_H
#define HAND_IN_5_1_BALL_H


#include "object.h"

class Ball : public Object
{
public:
    Ball();
    Ball(double *x, double *y);

    void DrawMe();

};


#endif //HAND_IN_5_1_BALL_H
