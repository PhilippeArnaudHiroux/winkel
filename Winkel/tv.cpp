#include "tv.h"

tv::tv(string groot_of_klein) : nonFood(groot_of_klein)
{

}

float tv::prijs(int aantal)
{
    if(groot_of_klein == "klein")
    {
        cout << "tv klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "tv groot -> " << getProduct_prijs() * 1.5 << " * " << aantal << " = ";
        return getProduct_prijs() * 1.5 * aantal;
    }
}
