#include "koeken.h"

koeken::koeken(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    product_prijs = 2.99;
}

koeken::~koeken() //Destructor
{}

float koeken::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        cout << "koeken klein -> " << product_prijs << " * " << aantal << " = ";
        return product_prijs * aantal;
    }
    else
    {
        cout << "koeken groot -> " << product_prijs * 1.7 << " * " << aantal << " = ";
        return product_prijs * 1.7 * aantal;
    }
}
