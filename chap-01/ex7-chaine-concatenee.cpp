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
        str += argv[i];     // fonctionne car la classe std::string a 
                            // une surcharge pour l'operateur += pour
                            // les chaines de caracteres C const char*
    }
    
    std::cout << str.size() << std::endl;

    // attention de bien caster les chaines litterales en std::string
    // sinon "abc"+"def" ne donne pas "abcdef"
    //
    // std::cout << "abc" + "def" << std::endl;     
    // => operateur+ a redefinir pour const char*
    //
    std::cout << std::string("abc") + std::string("def") << std::endl;
    std::cout << std::string{"abc"} + std::string{"def"} << std::endl;

    return 0;
}

/* 
g++ -std=c++17 ex7-chaine-concatenee.cpp -o ex7 && ./ex7 toto titi
1 - toto
2 - titi
8
abcdef
abcdef
*/