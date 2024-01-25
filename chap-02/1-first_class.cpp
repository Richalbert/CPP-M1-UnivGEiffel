#include <iostream>


class Person {
private:
    std::string name;
    int age;

public:
    void set_name(std::string name);
    void set_age(int age);

    std::string get_name() const;
    int get_age() const;

};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}

int Person::get_age() const {
    return this->age;
}

std::string Person::get_name() const {
    return this->name;
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

    Compilation et edition de liens
        g++ -std=c++17 -Wfatal-errors -o program 1-first_class.cpp

    Execution
        ./program

    Sortie
        Person named 'Batman' is 23 years old.

    Git
        git checkout test-ch2
        git add 1-first_class.cpp
        git commit -m "TDD - ca compile"
        git push origin test-ch2

        git checkout master
        git merge test-ch2
        git commit -m "merge de la branche de test-ch2"
        git push origin master


*/
