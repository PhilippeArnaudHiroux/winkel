#include "conserven.h"

conserven::conserven(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    product_prijs = 1.3;
}

conserven::~conserven() //Destructor
{

}

float conserven::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        cout << "conserven klein -> " << product_prijs << " * " << aantal << " = ";
        return product_prijs * aantal;
    }
    else
    {
        cout << "conserven groot -> " << product_prijs * 1.5 << " * " << aantal << " = ";
        return product_prijs * 1.5 * aantal;
    }
}
