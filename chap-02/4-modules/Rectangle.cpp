// Implement Rectangle functions here.

#include "Rectangle.h"

//float Rectangle::_default_size = 0.f;

// ctor par defaut qui delegue la construction au ctor a 1 parametre
Rectangle::Rectangle() : Rectangle(_default_size) {}


Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
    {}


Rectangle::Rectangle(float cote)
: Rectangle(cote, cote)
{}


void Rectangle::scale(float ratio)
    {
        _length *= ratio;
        _width *= ratio;
    }

