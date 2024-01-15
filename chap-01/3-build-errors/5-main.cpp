#include "5-tic.hpp"
#include "5-tac.hpp"



int main()
{
    Tic tic { 1 };
    Tac tac { 5 };

    tic.swap(tac);
    tac.swap(tic);

    return 0;
}

/*
g++ -std=c++17 -Wfatal-errors -c 5-main.cpp 

In file included from 5-tic.hpp:3,
                 from 5-main.cpp:1:
5-tac.hpp:8:15: error: ‘Tic’ has not been declared
    8 |     void swap(Tic& tic);
      |               ^~~
compilation terminated due to -Wfatal-errors.



// =================================================//
// Inclusion de 5-tic.hpp depuis 5-main.cpp         //
// =================================================//
                                                    //
#pragma once     // -> inclusion de 5-tic.hpp       //
                                                    //
    // =========================================//  //
    // Inclusion de 5-tac.hpp depuis 5-tic.hpp  //  //
    // =========================================//  //
                                                //  //
    #pragma once   // -> inclusion de 5-tac.hpp //  //
                                                //  //
    // ==================//                     //  //
    #include "5-tic.hpp" //   -> deja inclus    //  //
    // ==================//                     //  //
                                                //  //
    struct Tac                                  //  //
    {                                           //  //
        // Invert value with tic.               //  //
        void swap(Tic& tic);                    //  //      il ne connait pas Tic
                                                //  //
        int value = 0;                          //  //
    };                                          //  //
    // =========================================//  //
                                                    //
struct Tic                                          //
{                                                   //
    // Invert value with tac.                       //
    void swap(Tac& tac);                            //
                                                    //
    int value = 0;                                  //
};                                                  //
// =================================================//

*/