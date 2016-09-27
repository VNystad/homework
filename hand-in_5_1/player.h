#ifndef HAND_IN_5_1_PLAYER_H
#define HAND_IN_5_1_PLAYER_H


#include <string>
#include "object.h"

class Player : public Object
{
public:
    Player();

    Player(double *startX, double *startY);


};


#endif //HAND_IN_5_1_PLAYER_H
