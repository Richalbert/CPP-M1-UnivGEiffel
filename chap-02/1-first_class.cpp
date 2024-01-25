#include <iostream>


class Person {
private:
    std::string name;
    int age;

public:
    void set_name(std::string name);
    void set_age(int age);

};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    // std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}

void Person::set_age(int age) {
    this->age = age;
}

void Person::set_name(std::string name) {
    this->name = name;
}

/*
    Methodologie Test Driven Development - TDD
    - on part du main, et
    - on modifie le code pour que ca compile

    Compilation seule
        g++ -std=c++17 -Wfatal-errors -c 1-first_class.cpp

    Git
        git checkout test-ch2
        git add 1-first_class.cpp
        git commit -m "TDD - ca compile"
        git push origin test-ch2

*/
