#ifndef TEKST_H
#define TEKST_H

#include <iostream>

namespace tekst //Eigen namespace
{
    inline void grootOfKlein() //Inline function
    {
        std::cout << "***** Klein of groot *****" << std::endl; //Print de tekst
        std::cout << "Voor klein type klein" << std::endl; //Print de tekst
        std::cout << "Voor groot type groot" << std::endl << std::endl; //Print de tekst
    }

    inline void drogevoedingAfdeeling() //Inline fucntion
    {
        std::cout << "***** Welkom bij droge voeding *****" << std::endl; //Print de tekst
        std::cout << "Als je koeken wilt kopen duw dan op 1" << std::endl; //Print de tekst
        std::cout << "Als je wasmiddel wilt kopen duw dan op 2" << std::endl; //Print de tekst
        std::cout << "Als je conserven wilt kopen duw dan op 3" << std::endl; //Print de tekst
        std::cout << "Als je naar de volgende afdeling wilt duw dan op 0" << std::endl; //Print de tekst
    }

    inline void drankenAfdeeling()
    {
        std::cout << "***** Welkom bij de dranken *****" << std::endl;
        std::cout << "Als je water wilt kopen duw dan op 1" << std::endl; //Print de tekst
        std::cout << "Als je fruitsap wilt kopen duw dan op 2" << std::endl; //Print de tekst
        std::cout << "Als je wijn wilt kopen duw dan op 3" << std::endl; //Print de tekst
        std::cout << "Als je naar de volgende afdeling wilt duw dan op 0" << std::endl; //Print de tekst
    }
}

#endif // TEKST_H
