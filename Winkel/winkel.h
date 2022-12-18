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
    winkel(); //Constructor
    ~winkel(); //Destructor

    void droogVoeding(); //Member functie
    void drank(); //Member functie
    void geenEten(); //Member functie

protected:
    vector <drogeVoeding*> droge_voeding; //Vector
    vector <dranken*> drinken; //Vector
    vector <nonFood*> non_food; //Vector

    unsigned short int* keuze = new unsigned short int; //Memory -> new
    unsigned short int aantalVoeding[1000]; //Member variabel
    unsigned short int aantalDrank[1000]; //Member variabel
    unsigned short int aantalNonFood[1000]; //Member variabel
    string grootOfKlein; //Member variabel
    unsigned short int j = 0; //Member variabel
    unsigned short int k = 0; //Member variabel
    unsigned short int l = 0; //Member variabel
};

#endif // WINKEL_H
