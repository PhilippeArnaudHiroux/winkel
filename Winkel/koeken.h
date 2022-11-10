#ifndef KOEKEN_H
#define KOEKEN_H

#include "drogevoeding.h"

class koeken : public drogeVoeding
{
public:
    koeken(std::string groot_of_klein); //Constructor
    ~koeken(); //Destructor

    float prijs(int aantal);
};

#endif // KOEKEN_H
