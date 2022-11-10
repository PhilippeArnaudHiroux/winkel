#ifndef KOEKEN_H
#define KOEKEN_H

#include "drogevoeding.h"

class koeken : public drogeVoeding
{
public:
    koeken(std::string groot_of_klein); //Constructor
    ~koeken(); //Destructor

    float prijs(int aantal); //Virtuele functie

protected:
    float product_prijs = 2.99;
};

#endif // KOEKEN_H
