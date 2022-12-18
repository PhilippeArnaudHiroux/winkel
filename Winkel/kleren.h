#ifndef KLEREN_H
#define KLEREN_H

#include <iostream>
#include "nonfood.h"

using namespace std;

class kleren : public nonFood
{
public:
    kleren(string groot_of_klein); //Constructor
    ~kleren(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // KLEREN_H
