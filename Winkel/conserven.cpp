#include "conserven.h"

conserven::conserven(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{

}

conserven::~conserven() //Destructor
{

}

float conserven::prijs(int aantal) //Virtuele functie
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
