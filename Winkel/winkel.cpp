#include "winkel.h"

winkel::winkel()
{
    kastiket tiket; //Maak tiket object aan

    pah::welkom();
    pah::grootOfKlein(); //Functie uit namespace

    pah::drogevoedingAfdeeling(); //Functie uit namespace
    droogVoeding(); //Voer de member functie uit

    pah::drankenAfdeeling(); //Functie uit namespace
    drank(); //Voer de member functie uit

    pah::nonFoodAfdeeling(); //Functie uit namespace
    geenEten(); //Voer de member functie uit

    for(int i=0; i<j; i++) //Doe dit zolang dat i<j
    {
        tiket.setTotaal_droogVoeding(droge_voeding.at(i)->prijs(aantalVoeding[i])); //Hier word de prijs van het element bij de totaal prijs geteld
    }

    for(int i=0; i<k; i++) //Doe dit zolang dat i<j
    {
        tiket.setTotaal_dranken(drinken.at(i)->prijs(aantalDrank[i])); //Hier word de prijs van het element bij de totaal prijs geteld
    }

    for(int i=0; i<l; i++) //Doe dit zolang dat i<j
    {
        tiket.setTotaal_nonfood(non_food.at(i)->prijs(aantalVoeding[i])); //Hier word de prijs van het element bij de totaal prijs geteld
    }

    pah::afschijd(); //Functie uit namespacce
    tiket.printTiket(); //Functie uit tiket object
}
winkel::~winkel()
{
    delete keuze; //Memory -> delete
}

void winkel::droogVoeding()
{
    do{ //Doe
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
                droge_voeding.push_back(new koeken(grootOfKlein)); //Nieuw element in container
            }
            else if(*keuze == 2)
            {
                droge_voeding.push_back(new wasmiddel(grootOfKlein));  //Nieuw element in container
            }
            else
            {
                droge_voeding.push_back(new conserven(grootOfKlein));  //Nieuw element in container
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
                drinken.push_back(new water(grootOfKlein));  //Nieuw element in container
            }
            else if(*keuze == 2)
            {
                drinken.push_back(new fruitsap(grootOfKlein));  //Nieuw element in container
            }
            else
            {
                drinken.push_back(new wijn(grootOfKlein));  //Nieuw element in container
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
                non_food.push_back(new kleren(grootOfKlein));  //Nieuw element in container
            }
            else if(*keuze == 2)
            {
                non_food.push_back(new tv(grootOfKlein));  //Nieuw element in container
            }
            else
            {
                non_food.push_back(new boeken(grootOfKlein));  //Nieuw element in container
            }

            l++;
        }

        cout << endl;
    }while(*keuze != 0);
}

