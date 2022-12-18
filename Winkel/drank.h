#ifndef DRANK_H
#define DRANK_H

#include <iostream>
#include <string>

using namespace std;

class dranken
{
public:
    dranken(string groot_of_klein); //Constructor
    ~dranken(); //Destructor

    virtual float prijs(int aantal) = 0; //Virtuele functie
    void setProduct_prijs(float newProduct_prijs); //Setter voor product_prijs
    float getProduct_prijs() const; //Getter voor product_prijs

protected:
    string groot_of_klein; //Member Variabel

private:
    float product_prijs = 23; //Member Variabel
};

#endif // DRANK_H
