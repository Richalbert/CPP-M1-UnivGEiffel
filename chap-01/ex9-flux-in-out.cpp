/*
    std::cout       <<      pour ecrire dans la sortie standard
    std::cerr       <<      pour ecrire dans la sortie d'erreurs

    std::cin        >>      pour lire depuis l'entree standard

    std::fstream            pour lire dans, ecrire depuis des fichiers
*/

#include <iostream>
#include <fstream>
#include <typeinfo>         // pour connaitre le type des variables
#include <typeindex>        // pour connaitre le types des variable avec index

int main() {

    auto file = std::fstream {"text1.txt"};
/*
    const std::type_info& type = typeid(decltype(file));
    std::cout << "Le type de file (auto) est : " << type.name() 
              << std::endl;

    const std::type_index typeIndex = typeid(decltype(file));
    std::cout << "Le type de file (auto) avec type_index est : " 
              << typeIndex.name() << std::endl;
*/

    // on verifie que le fichier existe et a pu etre ouvert
    if (file) {     // evalue a true si le fichier est ouvert
                    // rendu possible par surcharge de l'operateur bool()
        std::cout << "Le fichier est ouvert" << std::endl;
    } else {
        std::cerr << "Impossible d'ouvrir le fichier" << std::endl;
    }

    file.close();

    // autre facon pour ouvrir un fichier
    std::fstream fichier("text1.txt", std::ios::in | std::ios::out);

    if (fichier.is_open()) {
        std::cout << "Le fichier est ouvert" << std::endl;
    } else {
        std::cerr << "Impossible d'ouvrir le fichier." << std::endl;
    }

    file.close();


    // ouverture et lecture
    auto file2 = std::fstream("text1.txt");

    if (file2) {
        std::string text;
        while (!file2.eof()) {    // eof() retourne true a la fin de fichier
            file2 >> text;        // on lit un mot depuis le fichier
            std::cout << text << std::endl;
        }
    } else {
        std::cerr << "impossible d'ouvrir le fichier" << std::endl;
    }

    file2.close();


    // ouverture et lecture autre facon
    std::fstream fichier2("text.txt", std::ios::in | std::ios::out);

    if (fichier2.is_open()) {
        std::cout << "Le fichier est ouvert" << std::endl;
        std::string mot;
        while (fichier2 >> mot) {
            std::cout << mot << std::endl;
        }

    } else {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }

    fichier2.close();
    return 0;
}

/*
Le type de file (auto) est : St13basic_fstreamIcSt11char_traitsIcEE
Le type de file (auto) avec type_index est : St13basic_fstreamIcSt11char_traitsIcEE
*/