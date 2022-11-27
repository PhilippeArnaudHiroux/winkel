#include "conserven.h"

conserven::conserven(std::string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    setProduct_prijs(1.3);
}

conserven::~conserven() //Destructor
{}

float conserven::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        cout << "conserven klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "conserven groot -> " << getProduct_prijs() * 1.5 << " * " << aantal << " = ";
        return getProduct_prijs() * 1.5 * aantal;
    }
}
