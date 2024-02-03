#include <iostream>
#include <string>
#include <sstream>

class Person
{
public:
    const std::string& get_name()     const { return _name; }
    const std::string& get_firstname() const { return _firstname; }
    const std::string& get_surname()  const { return _surname; }
    unsigned int       get_age()  const { return _age; }

    const std::string get_full_name() const {
        std::ostringstream flux;
        flux << get_firstname() << " "
             << get_name() << " "
             << get_surname();
        return flux.str();
    }

    //void set_name(const std::string& name) { _name = name; }
    void set_age(unsigned int age) { _age = age; }

    /* ctor */
    Person(const std::string& firstname, const std::string& name, const std::string& surname) 
    : _firstname { firstname }
    , _name { name }
    , _surname { surname }
    {}
   

private:
    std::string  _firstname;
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

int main()
{
    Person p {"Bruce", "Wayne", "Batman"};

    //p.set_name("Batman");
    p.set_age(23);

    //std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;
    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old." << std::endl;
         
    return 0;
}

/*
    Methodologie Test Driven Development - TDD
    - on part du main, et
    - on modifie le code pour que ca compile

    Compilation seule
        g++ -std=c++17 -Wfatal-errors -c 2-constructor.cpp

    Compilation avec les symboles de debug
        g++ -g -std=c++17 -o 2-constructor 2-constructor.cpp

        puis configurer le fichier.vscode/launch.json
        ...
        "program": "${workspaceFolder}/chap-02/2-constructor",
        ...

    Compilation et edition de liens
        g++ -std=c++17 -Wfatal-errors -o program 2-constructor.cpp

    Execution
        ./program

    Sortie
        Person named 'Bruce Wayne Batman' is 23 years old.

    Git
        git branch -D test              // delete de la branche test en local
        git push origin -d test         // delete de la branche sur le depot distant si besoin

        git branch test                 // creation de la branche en local
        git checkout test               // changement de branche
        git status                      // pour voir
        git add 2-constructor.cpp       
        git commit -m "ctor Person a la place du setter name"
        git push origin test

        git checkout master
        git merge test-ch2
        git commit -m "merge de la branche de test-ch2"
        git push origin master

        git branch -d test-ch2          // suppression de la branche en local
        git push origin -d test-ch2     // suppression de la branche sur le depot distant
*/