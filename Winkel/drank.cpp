#include "drank.h"

dranken::dranken(string groot_of_klein) : groot_of_klein(groot_of_klein) //Constructor
{}

dranken::~dranken() //Destructor
{}

void dranken::setProduct_prijs(float newProduct_prijs)
{
    product_prijs = newProduct_prijs;
}

float dranken::getProduct_prijs() const
{
    return product_prijs;
}
