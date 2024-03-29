#ifndef PAH_H
#define PAH_H

#include <iostream>

namespace pah //Eigen namespace
{
    inline void welkom() //Inline function
    {
        std::cout << "***** Welkom bij uw lokale supermarkt *****" << std::endl << std::endl;
    }

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

    inline void drankenAfdeeling() //Inline fucntion
    {
        std::cout << "***** Welkom bij de dranken *****" << std::endl; //Print de tekst
        std::cout << "Als je water wilt kopen duw dan op 1" << std::endl; //Print de tekst
        std::cout << "Als je fruitsap wilt kopen duw dan op 2" << std::endl; //Print de tekst
        std::cout << "Als je wijn wilt kopen duw dan op 3" << std::endl; //Print de tekst
        std::cout << "Als je naar de volgende afdeling wilt duw dan op 0" << std::endl; //Print de tekst
    }

    inline void nonFoodAfdeeling() //Inline fucntion
    {
        std::cout << "***** Welkom bij de non food afdeling *****" << std::endl; //Print de tekst
        std::cout << "Als je kleren wilt kopen duw dan op 1" << std::endl; //Print de tekst
        std::cout << "Als je TV wilt kopen duw dan op 2" << std::endl; //Print de tekst
        std::cout << "Als je boeken wilt kopen duw dan op 3" << std::endl; //Print de tekst
        std::cout << "Als je naar de volgende afdeling wilt duw dan op 0" << std::endl; //Print de tekst
    }

    inline void afschijd() //Inline fucntion
    {
        std::cout << "Bedankt voor je bezoek en tot de volgende keer" << std::endl; //Print de tekst
    }
}

#endif // PAH_H
