#ifndef KASTIKET_H
#define KASTIKET_H

#include <iostream>
#include <fstream>
#include <time.h>
#include "pah.h"

class kastiket
{
public:
    kastiket(); //Constructor
    ~kastiket(); //Destructor

    float getTotaal_droogVoeding() const; //Getter voor totaal_droog_Voeding
    void setTotaal_droogVoeding(float newTotaal_droogVoeding); //Setter voor totaal_droog_Voeding

    float getTotaal_dranken() const; //Getter voor totaal dranken
    void setTotaal_dranken(float newTotaal_dranken); //Setter voor totaal dranken

    float getTotaal_nonfood() const; //Getter voor totaal nonFood
    void setTotaal_nonfood(float newTotaal_nonfood); //Setter voor totaal nonFood

    float getTotaal() const; //Getter voor totaal
    void setTotaal(float droogVoeding, float drank, float nonFood); //Setter voor totaal

    void printTiket(); //Member functie

private:
    float totaal_droogVoeding = 0; //Member variabel
    float totaal_dranken = 0; //Member variabel
    float totaal_nonfood = 0; //Member variabel
    float totaal = 0; //Member variabel
};

#endif // KASTIKET_H
