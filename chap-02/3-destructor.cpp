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

int main()
{
    {
        Person batman { "Bruce", "Wayne" };
        batman.wait(23);
    }   // dtor est appelle ici

    std::cout << "After block" << std::endl;

    Person batman { "Bruce", "Wayne" };
    batman.wait(23);

    std::cout << "End of block main" << std::endl;

    return 0;
}   // dtor est appelle ici

/*
Bruce Wayne died at 23 years old
After block
End of block main
Bruce Wayne died at 23 years old

*/