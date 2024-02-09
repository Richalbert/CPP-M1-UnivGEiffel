#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    return 0;
}

/*
    g++ -std=c++17 -Wfatal-errors -o program main.cpp Rectangle.cpp

    compilation seule
    g++ -std=c++17 main.cpp Rectangle.cpp


    main.o: 
        - main()
        - Rectangle::get_length()       // apparait 2 fois
        - Rectangle::get_width()        // donc ne devrait pas compiler

    Rectangle.o:
        - Rectangle::get_length()       <-- definie inline
        - Rectangle::get_width()        <-- definie inline
        - Rectangle::Rectangle()        <-- definie inline
        - Rectangle::sclae(float)       <-- definie inline

    Toutes les fonctions definies a l'interieur de la definition 
    de la classe sont automatiquement inline

*/