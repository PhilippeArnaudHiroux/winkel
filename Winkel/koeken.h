#ifndef KOEKEN_H
#define KOEKEN_H

#include <iostream>
#include "drogevoeding.h"
#include <fstream>

using namespace std;

class koeken : public drogeVoeding
{
public:
    koeken(string groot_of_klein); //Constructor
    ~koeken(); //Destructor

    float prijs(int aantal); //Virtuele functie




    // t interface
public:
    //void test();
};

#endif // KOEKEN_H
