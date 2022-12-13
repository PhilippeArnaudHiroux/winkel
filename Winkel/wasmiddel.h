#ifndef WASMIDDEL_H
#define WASMIDDEL_H

#include <iostream>
#include "drogevoeding.h"

using namespace std;

class wasmiddel : public drogeVoeding
{
public:
    wasmiddel(string groot_of_klein); //Constructor
    ~wasmiddel(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // WASMIDDEL_H
