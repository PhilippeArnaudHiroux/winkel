#ifndef WATER_H
#define WATER_H

#include <iostream>
#include "drank.h"

using namespace std;

class water : public dranken
{
public:
    water(string groot_of_klein); //Constructor
    ~water(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // WATER_H
