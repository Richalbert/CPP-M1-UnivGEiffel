#pragma once    // directive au sommet de chaque headerde chaque header
                // pour empecher les inclusions multiples d'un meme header
                // plus moderne que #ifndef, #define, #endif

#include "4-car.hpp"

#include <iostream>

struct Driver
{
    void drive(Car car)
    {
        std::cout << "I'm driving a " << car.brand << std::endl; 
    }
};