#include <iostream>
#include <fstream>
#include <string>


int main()
{
    // on ecrit dans un fichier ce que dit la personne
    // on lit le fichier et on precede chaque line par Craow

    // creation du fichier en ecriture
    auto file = std::fstream { "perroquet.txt", std::fstream::out };

    if (file) {
        std::cout << "Ouverture du fichier en ecriture" << std::endl;
        
        file << "Coucou" << std::endl;
        file << "Ca va ?" << std::endl;

    } else {
        std::cerr << "Impossible d'ouvrir le fichier em ecriture" << std::endl;
    }

    file.close();
    
    // reponse du perroquet : creation du fichier en lecture
    auto file2 = std::fstream { "perroquet.txt", std::fstream::in };

    if (file2) {
        std::cout << "ouverture du fichier en lecture" << std::endl;

        std::string ligne;
        while (std::getline(file2, ligne)) {
            std::cout << "Craow ";
            std::cout << ligne << std::endl;            
        }
    } else {
        std::cerr << "impossible d'ouvrir le fichier en lecture" << std::endl;
    }

    file2.close();

    return 0;
}


/*
    TODO : Dialogue entre l'user et le perroquet

    [user]          Coucou
                    Ca va ?
    [perroquet]     Croaw Coucou
                    Croaw Ca va ?


Ouverture du fichier en ecriture
ouverture du fichier en lecture
Craow Coucou
Craow Ca va ?
*/