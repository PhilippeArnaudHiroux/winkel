#include "kastiket.h"

using namespace pah;

kastiket::kastiket() //Constructor
{}

kastiket::~kastiket() //Destructor
{}

float kastiket::getTotaal_droogVoeding() const
{
    return totaal_droogVoeding;
}

void kastiket::setTotaal_droogVoeding(float newTotaal_droogVoeding)
{
    totaal_droogVoeding += newTotaal_droogVoeding;
}

float kastiket::getTotaal_dranken() const
{
    return totaal_dranken;
}

void kastiket::setTotaal_dranken(float newTotaal_dranken)
{
    totaal_dranken += newTotaal_dranken;
}

float kastiket::getTotaal_nonfood() const
{
    return totaal_nonfood;
}

void kastiket::setTotaal_nonfood(float newTotaal_nonfood)
{
    totaal_nonfood += newTotaal_nonfood;
}

float kastiket::getTotaal() const
{
    return totaal;
}

void kastiket::setTotaal(float droogVoeding, float drank, float nonFood)
{
    totaal = droogVoeding + drank + nonFood;
}

void kastiket::printTiket() //Member functie
{
    std::ofstream File("output.txt"); //Maak file aan en open het
    File.seekp(0); //Ga naar het begin van de file
    File.clear(); //Maak de file leef
    time_t timetoday; //Kijk voor de tijd
    time(&timetoday); //Kijk voor de tijd
    File << "Welkom bij uw lokale supermakt" << std::endl; //Print dit in de file
    File << asctime(localtime(&timetoday)) << std::endl << std::endl; //Print dit in de file

    File << "Je totaal bij droge voeding bedraagt: " << getTotaal_droogVoeding() << std::endl; //Print dit in de file
    File << "Je totaal bij dranken bedraagt: " << getTotaal_dranken() << std::endl; //Print dit in de file
    File << "Je totaal bij non food bedraagt: " << getTotaal_nonfood() << std::endl; //Print dit in de file

    setTotaal(getTotaal_droogVoeding(), getTotaal_dranken(), getTotaal_nonfood());
    File << "Je totaal bedraagt: " << getTotaal() << std::endl << std::endl; //Print dit in de file

    File.close();
}

