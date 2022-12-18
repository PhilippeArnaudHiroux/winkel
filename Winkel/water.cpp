#include "water.h"

water::water(string groot_of_klein) : dranken(groot_of_klein)
{
    //setProduct_prijs(0.8);
}

float water::prijs(int aantal) //Virtuele functie
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
