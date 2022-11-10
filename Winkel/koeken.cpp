#include "koeken.h"

koeken::koeken(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{

}

koeken::~koeken() //Destructor
{}

float koeken::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        return product_prijs * aantal;
    }
    else
    {
        return product_prijs * 1.7 * aantal;
    }
}
