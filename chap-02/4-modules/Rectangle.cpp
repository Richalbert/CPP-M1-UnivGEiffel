// Implement Rectangle functions here.

/*
    Pour definir une fonction membre en dehors de sa classe
    on prfixe l'identifiant de la fonction par le nom de la classe
    suivi de ::

    ->   Rectangle::
*/



#include "Rectangle.h"

Rectangle::Rectangle(float length, float width)
        : _length { length }
        , _width { width }
    {}


void Rectangle::scale(float ratio)
    {
        _length *= ratio;
        _width *= ratio;
    }