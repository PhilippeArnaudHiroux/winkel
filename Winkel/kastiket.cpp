#include "kastiket.h"

using namespace pah;

kastiket::kastiket()
{

}

kastiket::~kastiket()
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

void kastiket::printTiket()
{
    std::ofstream File("output.txt");
    File.seekp(0);
    File.clear();
    time_t timetoday;
    time(&timetoday);
    File << "Welkom bij uw lokale supermakt" << std::endl;
    File << asctime(localtime(&timetoday)) << std::endl << std::endl;

    File << "Je totaal bij droge voeding bedraagt: " << getTotaal_droogVoeding() << std::endl;
    File << "Je totaal bij dranken bedraagt: " << getTotaal_dranken() << std::endl;
    File << "Je totaal bij non food bedraagt: " << getTotaal_nonfood() << std::endl;

    setTotaal(getTotaal_droogVoeding(), getTotaal_dranken(), getTotaal_nonfood());
    File << "Je totaal bedraagt: " << getTotaal() << std::endl << std::endl;

    File.close();
}

