/*
    concatene les chaines passees en argument au programme, puis 
    affiche le nombre total de lettres
*/

#include <iostream>
#include <string>

int main(int argc, char** argv) {

    std::string str = "";
    for (int i = 1; i < argc; i++) {
        std::cout << i << " - " << argv[i] << std::endl;
        str += argv[i];
    }
    
    std::cout << str.size() << std::endl;

    return 0;
}

/* 
g++ -std=c++17 ex7-chaine-concatenee.cpp -o ex7 && ./ex7 toto titi
1 - toto
2 - titi
8
*/