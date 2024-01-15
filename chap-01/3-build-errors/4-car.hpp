#pragma once    // directive au sommet de chaque headerde chaque header
                // pour empecher les inclusions multiples d'un meme header
                // plus moderne que #ifndef, #define, #endif

#include <string>

struct Car
{
    std::string brand;
};
