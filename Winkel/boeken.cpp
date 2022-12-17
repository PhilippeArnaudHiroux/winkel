#include "boeken.h"

boeken::boeken(string groot_of_klein) : nonFood(groot_of_klein)
{

}

float boeken::prijs(int aantal)
{
    if(groot_of_klein == "klein")
    {
        cout << "boeken klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "boeken groot -> " << getProduct_prijs() * 1.5 << " * " << aantal << " = ";
        return getProduct_prijs() * 1.5 * aantal;
    }

}

