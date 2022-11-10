#ifndef CONSERVEN_H
#define CONSERVEN_H

#include "drogevoeding.h"

class conserven : public drogeVoeding
{
public:
    conserven(std::string groot_of_klein); //Constructor
    ~conserven(); //Destructor

    float prijs(int aantal); //Virtuele functie

protected:
    float product_prijs = 1.3;
};

#endif // CONSERVEN_H
