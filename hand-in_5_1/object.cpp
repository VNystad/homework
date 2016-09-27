#include "object.h"

void Object::DrawMe() {}

void Object::SetX(double *x)
{
    this->y = y;
}
void Object::SetY(double *y)
{
    this->y = y;
}
void Object::SetWidth(int *width)
{
    this->width = width;
}
void Object::SetHeight(int *height)
{
    this->height = height;
}

double *Object::GetX()
{
    return this->x;
}
double *Object::GetY()
{
    return this->y;
}
