#ifndef DROGEVOEDING_H
#define DROGEVOEDING_H

#include <iostream>
#include <string>

using namespace std;

class drogeVoeding
{
public:
    drogeVoeding(string groot_of_klein); //Constructor
    ~drogeVoeding(); //Destructor

    virtual float prijs(int aantal) = 0; //Virtuele functie
    void setProduct_prijs(float newProduct_prijs); //Setter voor product_prijs
    float getProduct_prijs() const; //Getter voor product prijs

protected:
    string groot_of_klein; //Member Variabel

private:
    float product_prijs = 0; //Member Variabel
};

#endif // DROGEVOEDING_H
