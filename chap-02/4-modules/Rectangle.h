#pragma once

/* TODO
*   extraire le constructeur de la classe Rectangle
*   et la fonction scale dans le fichier Rectangle.cpp
*/

class Rectangle
{
public:
    Rectangle();                // ctor par defaut
    Rectangle(float cote);      // carre
    Rectangle(float length, float width);
    // Rectangle(float length, float width)
    //     : _length { length }
    //     , _width { width }
    // {}

    /* getter */
    float get_length() const { return _length; }
    float get_width() const { return _width; }


    void scale(float ratio);
    // void scale(float ratio)
    // {
    //     _length *= ratio;
    //     _width *= ratio;
    // }

    /*
    *   Attribut statique: 
    *       sa valeur est portee par la classe et non par une instance
    */
    inline static float _default_size;

private:
    float _length;
    float _width;
};
