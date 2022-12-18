#ifndef FRUITSAP_H
#define FRUITSAP_H

#include <iostream>
#include "drank.h"

using namespace std;

class fruitsap : public dranken
{
public:
    fruitsap(string groot_of_klein); //Constructor
    ~fruitsap(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // FRUITSAP_H
