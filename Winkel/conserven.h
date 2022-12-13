#ifndef CONSERVEN_H
#define CONSERVEN_H

#include <iostream>
#include "drogevoeding.h"

using namespace std;

class conserven : public drogeVoeding
{
public:
    conserven(string groot_of_klein); //Constructor
    ~conserven(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // CONSERVEN_H
