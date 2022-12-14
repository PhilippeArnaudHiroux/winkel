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

#include "drank.h"
#include "fruitsap.h"
#include "water.h"
#include "wijn.h"

using namespace std;

class winkel
{
public:
    winkel();
    ~winkel();

    void droogVoeding();
    void drank();

protected:
    vector <drogeVoeding*> droge_voeding;
    vector <dranken*> drinken;
    int keuze = 0;
    int aantalVoeding[1000];
    int aantalDrank[1000];
    string grootOfKlein;
    int j = 0;
    int k = 0;
};

#endif // WINKEL_H
