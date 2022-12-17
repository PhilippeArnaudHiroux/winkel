#include "nonfood.h"

nonFood::nonFood(string groot_of_klein) : groot_of_klein(groot_of_klein)
{}

float nonFood::getProduct_prijs() const
{
    return product_prijs;
}

void nonFood::setProduct_prijs(float newProduct_prijs)
{
    product_prijs = newProduct_prijs;
}
