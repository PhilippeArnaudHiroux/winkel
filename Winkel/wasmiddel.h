#ifndef WASMIDDEL_H
#define WASMIDDEL_H

#include <iostream>
#include "drogevoeding.h"

using namespace std;

class wasmiddel : public drogeVoeding
{
public:
    wasmiddel(std::string groot_of_klein); //Constructor
    ~wasmiddel(); //Destructor

    float prijs(int aantal); //Virtuele functie

protected:
    //float product_prijs = 5.45;
};

#endif // WASMIDDEL_H
