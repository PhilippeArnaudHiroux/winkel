#include "tv.h"

tv::tv(string groot_of_klein) : nonFood(groot_of_klein)
{}

tv::~tv()
{}

float tv::prijs(int aantal)
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
