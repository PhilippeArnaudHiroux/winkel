#include "drogevoeding.h"

drogeVoeding::drogeVoeding(std::string groot_of_klein) : groot_of_klein(groot_of_klein) //Constructor
{

}

drogeVoeding::~drogeVoeding() //Destructor
{}

void drogeVoeding::setProduct_prijs(float newProduct_prijs)
{
    product_prijs = newProduct_prijs;
}

float drogeVoeding::getProduct_prijs() const
{
    return product_prijs;
}
