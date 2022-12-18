#ifndef TV_H
#define TV_H

#include <iostream>
#include "nonfood.h"

using namespace std;

class tv : public nonFood
{
public:
    tv(string groot_of_klein); //Constructor
    ~tv(); //Destructor

    float prijs(int aantal); //Virtuele functie
};

#endif // TV_H
