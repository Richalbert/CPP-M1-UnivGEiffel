#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


int main()
{
    // on ecrit dans un fichier ce que dit la personne
    // on lit le fichier et on precede chaque line par Craow

    // creation du fichier en ecriture
    auto file = std::fstream { "perroquet.txt", std::fstream::out };

    if (file) {
        std::cout << "Ouverture du fichier en ecriture" << std::endl;

        // creation d'un tableau dynamique pour y stocker les phrases
        std::vector<std::string> tableau {};

        // creation d'un flux 
        std::stringstream flux {};

        // lecture au clavier, enregistrement dans un fichier et dans un tableau
        std::string line;
        while (true) {
            std::getline(std::cin, line);
            if (line.empty()) {
                break;          // si chaine vide on sort du while
            }
            //std::cout << "[Croaw] " << line << std::endl;
            file << line << std::endl;
            tableau.push_back(line);        
            flux << "Croaw - " << line << std::endl;
        }

        // lecture du tableau
        for (const std::string& phrase : tableau) {
            std::cout << "Croaw : " << phrase << std::endl;
        }

        // affichage du flux
        std::cout << flux.str() << std::endl;


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
Ouverture du fichier en ecriture
hello
mister le perroquet
as tu des choses a dire

Croaw : hello
Croaw : mister le perroquet
Croaw : as tu des choses a dire
Croaw - hello
Croaw - mister le perroquet
Croaw - as tu des choses a dire

ouverture du fichier en lecture
Craow hello
Craow mister le perroquet
Craow as tu des choses a dire
*/