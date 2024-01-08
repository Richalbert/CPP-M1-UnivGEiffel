#include <iostream>

/*
* @brief :  Recupere les carateres de l'entre standard 
*           pour effectuer des commandes
*/
int main() {

    auto exit = false;
    while (!exit) {
        auto c = std::cin.get();    // lit un caractere
        std::cin.ignore();          // ignore les carateres suivants
        switch (c) {
        case 'p':
            std::cout << "Print" << std::endl;
            break;
        case 'c':
            std::cout << "Compute" << std::endl;
            break;
        case 'b':
            std::cout << "Bye-Bye" << std::endl;
            exit = true;
            break;
        
        default:
            std::cout << "Unknown command" << std::endl;
            exit = true;
            break;
        }
    }
}