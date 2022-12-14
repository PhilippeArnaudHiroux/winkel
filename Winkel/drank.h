#ifndef DRANK_H
#define DRANK_H

#include <iostream>
#include <string>

using namespace std;

class dranken
{
public:
    dranken(string groot_of_klein);
    ~dranken();

    virtual float prijs(int aantal) = 0;
    void setProduct_prijs(float newProduct_prijs);
    float getProduct_prijs() const;

protected:
    string groot_of_klein;

private:
    float product_prijs = 23;
};

#endif // DRANK_H
