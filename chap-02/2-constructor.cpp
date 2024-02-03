#include <iostream>
#include <string>

class Person
{
public:
    const std::string& get_name() const { return _name; }
    unsigned int       get_age() const { return _age; }

    //void set_name(const std::string& name) { _name = name; }
    void set_age(unsigned int age) { _age = age; }

    /* ctor */
    Person(const std::string& name) : _name { name } {}
   

private:
    std::string  _name;
    unsigned int _age = 0u;
};

int main()
{
    Person p {"Batman"};

    //p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

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
        Person named 'Batman' is 23 years old.

    Git
        git branch -D test              // delete de la branche test en local
        git branch test                 // creation de la branche en local
        git checkout test               // changement de branche
        git status                      // pour voir
        git add 2-constructor.cpp       
        git commit -m "TDD - ca compile"
        git push origin test-ch2

        git checkout master
        git merge test-ch2
        git commit -m "merge de la branche de test-ch2"
        git push origin master

        git branch -d test-ch2          // suppression de la branche en local
        git push origin -d test-ch2     // suppression de la branche sur le depot distant
*/