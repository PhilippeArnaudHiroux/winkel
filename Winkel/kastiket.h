#ifndef KASTIKET_H
#define KASTIKET_H

#include <iostream>
#include <fstream>
#include "pah.h"

class kastiket
{
public:
    kastiket();
    ~kastiket();

    float getTotaal_droogVoeding() const;
    void setTotaal_droogVoeding(float newTotaal_droogVoeding);

    float getTotaal_dranken() const;
    void setTotaal_dranken(float newTotaal_dranken);

    float getTotaal_nonfood() const;
    void setTotaal_nonfood(float newTotaal_nonfood);

    float getTotaal() const;
    void setTotaal(float droogVoeding, float drank, float nonFood);

    void printTiket();

private:
    float totaal_droogVoeding = 0;
    float totaal_dranken = 0;
    float totaal_nonfood = 0;
    float totaal = 0;
};

#endif // KASTIKET_H
