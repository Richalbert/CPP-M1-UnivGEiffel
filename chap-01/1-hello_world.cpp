#include <iostream>
#include <vector>
#include <string>

int main() {

    // Ecrire sur la sortie standard
    std::cout << "Hello world!" << std::endl;


    // Autre version
    std::vector<std::string> msg = {"Hello", "world", "!"};

    for (const std::string& word : msg) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}