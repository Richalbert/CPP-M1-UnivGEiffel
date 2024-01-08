#include <iostream>

/*
    grace aux references on peut modifier une variable 
    depuis l'interieur d'une fonction 

    en C++ le passage de parametres s'effectue par copie

    si on definit un parametre comme une reference, alors
    le passage est fait par reference
*/

void set_variables_to_3(int p1, int& p2) {

    // p1 est une copie de v1
    // p2 est un alias de v2

    p1 = 3;     // la copie de v1 est modifie, pas v1 qui reste inchange

    p2 = 3;     // l'alias de v2 est modifie, donc v2 est modifie aussi
}


int main() {
    int v1 = 1;
    int v2 = 2;

    std::cout << "[avant]  v1 = " << v1 << ", v2 = " << v2 << std::endl;
    set_variables_to_3(v1, v2);
    std::cout << "[apres]  v1 = " << v1 << ", v2 = " << v2 << std::endl;

}