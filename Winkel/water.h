#ifndef WATER_H
#define WATER_H

#include <iostream>
#include "drank.h"

using namespace std;

class water : public dranken
{
public:
    water(string groot_of_klein);
    ~water();

    float prijs(int aantal);
};

#endif // WATER_H
