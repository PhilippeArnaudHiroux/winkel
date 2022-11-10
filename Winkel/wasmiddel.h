#ifndef WASMIDDEL_H
#define WASMIDDEL_H

#include "drogevoeding.h"

class wasmiddel : public drogeVoeding
{
public:
    wasmiddel(std::string groot_of_klein); //Constructor
    ~wasmiddel(); //Destructor

    float prijs(int aantal);
};

#endif // WASMIDDEL_H
