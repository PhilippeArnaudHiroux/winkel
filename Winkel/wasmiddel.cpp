#include "wasmiddel.h"

wasmiddel::wasmiddel(string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    setProduct_prijs(5.45);
}

wasmiddel::~wasmiddel() //Destructor
{}

float wasmiddel::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        return getProduct_prijs() * aantal;
    }
    else
    {
        return getProduct_prijs() * 1.5 * aantal;
    }
}
