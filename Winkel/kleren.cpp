#include "kleren.h"

kleren::kleren(string groot_of_klein) : nonFood(groot_of_klein)
{

}

kleren::~kleren()
{

}

float kleren::prijs(int aantal)
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
