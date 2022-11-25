#ifndef WINKEL_H
#define WINKEL_H

#include <iostream>
#include <string>
#include <vector>

#include "drogevoeding.h"
#include "koeken.h"
#include "wasmiddel.h"
#include "conserven.h"
#include "tekst.h"

using namespace std;


class winkel
{
public:
    winkel();
    ~winkel();

    void tekst_groot_of_klein();
    void tekst_drogevoeding();

protected:
    int keuze = 0;
    int aantal[1000];
    string grootOfKlein;
    int j = 0;
};

#endif // WINKEL_H
