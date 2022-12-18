#include "boeken.h"

boeken::boeken(string groot_of_klein) : nonFood(groot_of_klein) //Constructor
{}

boeken::~boeken() //Destructor
{

}

float boeken::prijs(int aantal) //Virtuele functie
{
    if(groot_of_klein == "klein") //Als groot_of_klein gelijks is aan
    {
        return getProduct_prijs() * aantal; //Return dit
    }
    else //Anders
    {
        return getProduct_prijs() * 1.5 * aantal; //Return dit
    }
}

