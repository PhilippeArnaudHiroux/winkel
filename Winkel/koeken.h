#ifndef KOEKEN_H
#define KOEKEN_H

#include <iostream>
#include "drogevoeding.h"

using namespace std;

class koeken : public drogeVoeding
{
public:
    koeken(std::string groot_of_klein); //Constructor
    ~koeken(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // KOEKEN_H
