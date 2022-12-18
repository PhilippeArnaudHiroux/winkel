#ifndef WIJN_H
#define WIJN_H

#include <iostream>
#include "drank.h"

using namespace std;

class wijn : public dranken
{
public:
    wijn(string groot_of_klein); //Constructor
    ~wijn(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // WIJN_H
