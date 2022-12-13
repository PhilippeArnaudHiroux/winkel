#ifndef WINKEL_H
#define WINKEL_H

#include <iostream>
#include <string>
#include <vector>

#include "tekst.h"

#include "drogevoeding.h"
#include "koeken.h"
#include "wasmiddel.h"
#include "conserven.h"

using namespace std;

class winkel
{
public:
    winkel();
    ~winkel();

    void droogVoeding();

protected:
    vector <drogeVoeding*> droge_voeding;
    int keuze = 0;
    int aantal[1000];
    string grootOfKlein;
    int j = 0;
};

#endif // WINKEL_H
