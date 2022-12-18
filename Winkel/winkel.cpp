#include "winkel.h"

winkel::winkel()
{
    kastiket tiket;

    pah::file_clear();
    pah::grootOfKlein();

    pah::drogevoedingAfdeeling();
    droogVoeding();

    pah::drankenAfdeeling();
    drank();

    pah::nonFoodAfdeeling();
    geenEten();

    for(int i=0; i<j; i++)
    {
        tiket.setTotaal_droogVoeding(droge_voeding.at(i)->prijs(aantalVoeding[i]));
    }

    for(int i=0; i<k; i++)
    {
        tiket.setTotaal_dranken(drinken.at(i)->prijs(aantalDrank[i]));
    }

    for(int i=0; i<l; i++)
    {
        tiket.setTotaal_nonfood(non_food.at(i)->prijs(aantalVoeding[i]));
    }

    pah::afschijd();
    tiket.printTiket();
}
winkel::~winkel()
{
    delete keuze;
}

void winkel::droogVoeding()
{
    do{
       cout << "Keuze: ";
       cin >> *keuze;

        if(*keuze > 0 && *keuze < 4)
        {
            do
            {
                cout << "Klein of groot: ";
                cin >> grootOfKlein;
            }while(grootOfKlein != "klein" && grootOfKlein != "groot");

            cout << "Aantal: ";
            cin >> aantalVoeding[j];

            if(*keuze == 1)
            {
                droge_voeding.push_back(new koeken(grootOfKlein));
            }
            else if(*keuze == 2)
            {
                droge_voeding.push_back(new wasmiddel(grootOfKlein));
            }
            else
            {
                droge_voeding.push_back(new conserven(grootOfKlein));
            }

            j++;
        }

        cout << endl;
    }while(*keuze != 0);
}

void winkel::drank()
{
    do{
       cout << "Keuze: ";
       cin >> *keuze;

        if(*keuze > 0 && *keuze < 4)
        {
            do
            {
                cout << "Klein of groot: ";
                cin >> grootOfKlein;
            }while(grootOfKlein != "klein" && grootOfKlein != "groot");

            cout << "Aantal: ";
            cin >> aantalDrank[k];

            if(*keuze == 1)
            {
                drinken.push_back(new water(grootOfKlein));
            }
            else if(*keuze == 2)
            {
                drinken.push_back(new fruitsap(grootOfKlein));
            }
            else
            {
                drinken.push_back(new wijn(grootOfKlein));
            }

            k++;
        }

        cout << endl;
    }while(*keuze != 0);
}

void winkel::geenEten()
{
    do{
       cout << "Keuze: ";
       cin >> *keuze;

        if(*keuze > 0 && *keuze < 4)
        {
            do
            {
                cout << "Klein of groot: ";
                cin >> grootOfKlein;
            }while(grootOfKlein != "klein" && grootOfKlein != "groot");

            cout << "Aantal: ";
            cin >> aantalNonFood[l];

            if(*keuze == 1)
            {
                non_food.push_back(new kleren(grootOfKlein));
            }
            else if(*keuze == 2)
            {
                non_food.push_back(new tv(grootOfKlein));
            }
            else
            {
                non_food.push_back(new boeken(grootOfKlein));
            }

            l++;
        }

        cout << endl;
    }while(*keuze != 0);
}

