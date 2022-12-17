#ifndef TV_H
#define TV_H

#include <iostream>
#include "nonfood.h"

using namespace std;

class tv : public nonFood
{
public:
    tv(string groot_of_klein);
    ~tv();

    float prijs(int aantal);
};

#endif // TV_H
