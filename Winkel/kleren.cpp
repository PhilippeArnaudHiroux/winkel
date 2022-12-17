#include "kleren.h"

kleren::kleren(string groot_of_klein) : nonFood(groot_of_klein)
{

}

float kleren::prijs(int aantal)
{
    if(groot_of_klein == "klein")
    {
        cout << "kleren klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "kleren groot -> " << getProduct_prijs() * 1.5 << " * " << aantal << " = ";
        return getProduct_prijs() * 1.5 * aantal;
    }
}
