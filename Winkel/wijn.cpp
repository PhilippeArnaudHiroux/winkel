#include "wijn.h"

wijn::wijn(string groot_of_klein) : dranken(groot_of_klein)
{}

wijn::~wijn()
{}

float wijn::prijs(int aantal) //Virtuele functie
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
