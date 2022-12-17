#ifndef NONFOOD_H
#define NONFOOD_H

#include <iostream>
#include <string>

using namespace std;

class nonFood
{
public:
    nonFood(string groot_of_klein);
    ~nonFood();

    virtual float prijs(int aantal) = 0;
    float getProduct_prijs() const;
    void setProduct_prijs(float newProduct_prijs);

protected:
    string groot_of_klein;

protected:
    float product_prijs = 5;
};

#endif // NONFOOD_H
