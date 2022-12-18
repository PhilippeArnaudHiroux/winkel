#ifndef WINKEL_H
#define WINKEL_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "pah.h"
#include "kastiket.h"

#include "drogevoeding.h"
#include "koeken.h"
#include "wasmiddel.h"
#include "conserven.h"

#include "drank.h"
#include "fruitsap.h"
#include "water.h"
#include "wijn.h"

#include "nonfood.h"
#include "boeken.h"
#include "kleren.h"
#include "tv.h"

using namespace std;

class winkel
{
public:
    winkel();
    ~winkel();

    void droogVoeding();
    void drank();
    void geenEten();




    vector <drogeVoeding*> droge_voeding;
    vector <dranken*> drinken;
    vector <nonFood*> non_food;
 protected:
    int* keuze = new int;
    int aantalVoeding[1000];
    int aantalDrank[1000];
    int aantalNonFood[1000];
    string grootOfKlein;
    int j = 0;
    int k = 0;
    int l = 0;
};

#endif // WINKEL_H
