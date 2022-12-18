#ifndef NONFOOD_H
#define NONFOOD_H

#include <iostream>
#include <string>

using namespace std;

class nonFood
{
public:
    nonFood(string groot_of_klein); //Constructor
    ~nonFood(); //Destructor

    virtual float prijs(int aantal) = 0; //Virtuele functie
    float getProduct_prijs() const; //Getter voor product_prijs
    void setProduct_prijs(float newProduct_prijs); //Setter voor product_prijs

protected:
    string groot_of_klein; //Member variabel

protected:
    float product_prijs = 5; //Member variabel
};

#endif // NONFOOD_H
