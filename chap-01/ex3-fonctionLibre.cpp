#include <iostream>

/** fonctions libres rattachees a aucune classe **/

// @brief :    Retourne la somme de 2 entiers 
int sum(int  a, int b) { 
    return a + b;
}

/*
*   @brief :    retourne vrai si la somme des 3 nombres est paires
*/
bool is_full_sum_even(int a, int b, int c) {
    int resultat = sum(a, sum(b, c));
    return resultat % 2;    // 0 si paire, mais attention 0 = false
}


int main() {

    int a = 2, b = 3;
    std::cout << " 2 + 3 = " << sum(a, b) << std::endl;

    int c = 4;
    std::cout << " 2 + 3 + 4 est ";
    if ( is_full_sum_even(a,b,c) == 0) {
        std::cout << "paire" << std::endl;
    } else {
        std::cout << "impaire" << std::endl;
    }

    return 0;
}
