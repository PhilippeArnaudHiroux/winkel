#include "wasmiddel.h"

wasmiddel::wasmiddel(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    product_prijs = 5.45;
}

wasmiddel::~wasmiddel() //Destructor
{}

float wasmiddel::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        cout << "wasmiddel klein -> " << product_prijs << " * " << aantal << " = ";
        return product_prijs * aantal;
    }
    else
    {
        cout << "wasmiddel groot -> " << product_prijs * 1.5 << " * " << aantal << " = ";
        return product_prijs * 1.5 * aantal;
    }
}
