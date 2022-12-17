#ifndef BOEKEN_H
#define BOEKEN_H

#include <iostream>
#include "nonfood.h"

using namespace std;

class boeken : public nonFood
{
public:
    boeken(string groot_of_klein);
    ~boeken();

    float prijs(int aantal);
};

#endif // BOEKEN_H
