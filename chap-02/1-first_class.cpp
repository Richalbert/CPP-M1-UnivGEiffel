#include <iostream>


class Person {

};

int main()
{
    Person p;

    // p.set_name("Batman");
    // p.set_age(23);

    // std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}

/*
    Methofologiere Test Driven Development - TDD
    - on part du main, et
    - on modifie le code pour que ca compile

    Compilation seule
        g++ -std=c++17 -Wfatal-errors -c 1-first_class.cpp
*/
