#ifndef HAND_IN_5_1_OBJECT_H
#define HAND_IN_5_1_OBJECT_H

#include <SFML/Graphics.hpp>

class Object
{
public:
    virtual void DrawMe();

    virtual void SetX(double *x);
    virtual void SetY(double *y);
    virtual void SetWidth(int *width);
    virtual void SetHeight(int *height);

    virtual double *GetX();
    virtual double *GetY();
protected:
    double* x;
    double* y;
    int* width;
    int* height;
};


#endif //HAND_IN_5_1_OBJECT_H
