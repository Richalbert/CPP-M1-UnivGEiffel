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

// Rectangle::Rectangle(float cote)
//     : _length { cote }
//     , _width { cote }
//     {}

Rectangle::Rectangle(float cote)
: Rectangle(cote, cote)
{}

void Rectangle::scale(float ratio)
    {
        _length *= ratio;
        _width *= ratio;
    }