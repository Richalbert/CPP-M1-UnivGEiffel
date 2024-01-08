#include <iostream>

/*
    @brief :    Les references sont des alias sur des zone memoires,
                cad une autre facon de nommer la meme zone mmoire
*/

int main() {

    int value = 3;
    int& ref = value;

    // value et ref sont identiques
    std::cout << value << " = " << ref << std::endl;

    // modifier l'un modifie l'autre
    ref = 5;
    std::cout << value << " = " << ref << std::endl;

    /* Attention a ne pas confondre les references et les adresses memoire */
    int variable = value;
    int& reference = variable;     // reference est un autre nom pour variable
    auto adresse = &variable;      // ici auto = int * est un pointeur sur variable

    std::cout << "valeur de l'adresse : \t" << adresse << std::endl;
    std::cout << "contenu de l'adresse : \t" << *adresse << std::endl;
    std::cout << "reference a la variable : " << reference << std::endl;

    auto addr = &variable;
    std::cout << addr << std::endl;

    int* ptr = &variable;
    std::cout << ptr << std::endl;

    


    return 0;
}

/*
int value = 5;                                    value : [ 5 ]

int variable = value;                          variable : [ 5 ]

int& reference = variable;         reference = variable : [ 5 ]

int* adresse = variable;      [ adresse ]----->variable : [ 5 ]
*/