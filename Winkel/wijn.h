#ifndef WIJN_H
#define WIJN_H

#include <iostream>
#include "drank.h"

using namespace std;

class wijn : public dranken
{
public:
    wijn(string groot_of_klein);
    ~wijn();

    float prijs(int aantal);
};

#endif // WIJN_H
