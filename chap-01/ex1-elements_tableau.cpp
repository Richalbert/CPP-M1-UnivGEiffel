#include <iostream>


/* 
 *  @brief : affiche si les elememts d'un tableau sont pairs ou impairs
*/
int main() {

    const int taille = 10;      // definition de la taille du tableau
    int tableau[taille];        // declaration du tableau

    // initialisation du tableau
    for (int i = 0; i < taille; i++) {
        tableau[i] = i;
    }

    // traitement et affichage
    for (int i = 0; i < taille; i++) {
        if (tableau[i] % 2 == 0) {
            std::cout << "Number #" << tableau[i] << " is even (pair)" << std::endl;
        } else {
            std::cout << "Number #" << tableau[i] << " is odd (impair)" << std::endl;
        }
    }

    return 0;
}