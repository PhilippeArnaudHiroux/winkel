#ifndef TEKST_H
#define TEKST_H

#include <iostream>

namespace tekst
{
    inline void grootOfKlein()
    {
        std::cout << "***** Klein of groot *****" << std::endl;
        std::cout << "Voor klein type klein" << std::endl;
        std::cout << "Voor groot type groot" << std::endl << std::endl;
    }

    inline void drogevoeding()
    {
        std::cout << "***** Welkom bij droge voeding *****" << std::endl;
        std::cout << "Als je koeken wilt kopen duw dan op 1" << std::endl;
        std::cout << "Als je wasmiddel wilt kopen duw dan op 2" << std::endl;
        std::cout << "Als je conserven wilt kopen duw dan op 3" << std::endl;
        std::cout << "Als je naar de volgende afdeling wilt duw dan op 0" << std::endl;
    }
}

#endif // TEKST_H
