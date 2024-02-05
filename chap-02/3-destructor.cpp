#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string name, std::string surname)
        : _name { name }
        , _surname { surname }
    {}

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    void wait(unsigned int years) { _age += years; }

    ~Person() {
        std::cout << get_full_name() << " died at " 
                  << get_age() << " years old"
                  << std::endl;
    }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};


class Batmobile {
private:
    Person _batman {"Bruce", "Wayne"};
public:
    ~Batmobile() {
        std::cout << "The Batmobile has been destroyed" << std::endl;
    }

};


int main()
{
    {
       Batmobile batmobile;
    }

    std::cout << "After block" << std::endl;


    return 0;
}   

/*
The Batmobile has been destroyed
Bruce Wayne died at 0 years old
After block

*/