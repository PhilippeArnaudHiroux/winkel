#include "fruitsap.h"

fruitsap::fruitsap(string groot_of_klein) : dranken(groot_of_klein)
{
    //setProduct_prijs(1);
    //getProduct_prijs();
}

float fruitsap::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein")
    {
        cout << "fruitsap klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "fruitsap groot -> " << getProduct_prijs() * 1.5 << " * " << aantal << " = ";
        return getProduct_prijs() * 1.5 * aantal;
    }
}
