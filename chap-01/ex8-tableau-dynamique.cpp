#include <iostream>
#include <vector>

int main() {

    // un tableau dynamique (vector) de int vide
    std::vector<int> tableauDeInt {};
    std::vector<int> numbers { 1, 23, 38, -54 };

    // un vector de string
    std::vector<std::string> tableauDeString;
    std::vector<std::string> tableau2DeString { "toto", "titi" };

    // un vector de bool vide :)
    auto are_evens = std::vector<bool> {};      // tableau de nombres pairs
    std::vector<bool> tableauDeBool = {};
    std::vector<bool> sont_pairs {};
    


    for (int n: numbers) {
        bool pair { n% 2 == 0 };                // 0:false, 1:true
        are_evens.push_back(pair);   
        sont_pairs.push_back(pair);    
    }

    for ( bool b : are_evens) {
        std::cout << b << std::endl;
    }

    std::cout << std::endl;

    for ( int c : sont_pairs) {
        std::cout << c << std::endl;
    }

    // affichage
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "Number " << numbers[i]
                  << " is " << (are_evens[i] ? "even (pair)" : "odd (impair)")
                  << std::endl;

    }

    return 0;
}

/*
chap-01$ g++ -std=c++17 ex8-tableau-dynamique.cpp -o ex8 && ./ex8
0
0
1
1

0
0
1
1
Number 1 is odd (impair)
Number 23 is odd (impair)
Number 38 is even (pair)
Number -54 is even (pair)
*/