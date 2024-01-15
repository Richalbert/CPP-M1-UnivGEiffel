#include <iostream>     // pour std::cin, std::cout et std::endl
#include <string>       // pour std::string

int main()
{
    std::string name;
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;

    return 0;
}

/*
    Compilation : g++ -std=c++17 -c 3-hello.cpp
*/