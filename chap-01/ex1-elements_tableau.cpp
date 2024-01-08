#include <iostream>     // pour cin / cout
#include <cstdlib>      // pour rand() et srand()
#include <ctime>        // pour time()

/* 
 *  @brief : affiche si les elememts d'un tableau sont pairs ou impairs
*/
int main() {

    const int taille = 10;      // definition de la taille du tableau
    int tableau[taille];        // declaration du tableau

    // initialisation du generateur de nombres aleatoires avec le temps reel
    srand(static_cast<unsigned int>(time(nullptr)));

    // initialisation du tableau avec des valeurs aleatoires entre 0 et 99
    for (int i = 0; i < taille; i++) {
        tableau[i] = rand() % 100;
    }

    // traitement et affichage
    for (int i = 0; i < taille; i++) {
        if (tableau[i] % 2 == 0) {
            std::cout << "Number #" << tableau[i] << " is even (pair)" << std::endl;
        } else {
            std::cout << "Number #" << tableau[i] << " is odd (impair)" << std::endl;
        }
    }

    std::cout << std::endl;

    // autre boucle for
    for (int elt : tableau) {
        if (elt % 2 == 0) {
            std::cout << "Number #" << elt << " is even (pair)" << std::endl;
        } else {
            std::cout << "Number #" << elt << " is odd (impair)" << std::endl;
        }
    }

    return 0;
}