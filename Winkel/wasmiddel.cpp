#include "wasmiddel.h"

wasmiddel::wasmiddel(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{

}

wasmiddel::~wasmiddel() //Destructor
{}

float wasmiddel::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        return product_prijs * aantal;
    }
    else
    {
        return product_prijs * 1.5 * aantal;
    }
}
