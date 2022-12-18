#include "koeken.h"

koeken::koeken(string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    setProduct_prijs(2.99);
}

koeken::~koeken() //Destructor
{}

float koeken::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        return getProduct_prijs() * aantal;
    }
    else
    {
        return getProduct_prijs() * 1.7 * aantal;
    }
}
