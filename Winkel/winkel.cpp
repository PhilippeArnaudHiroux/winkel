#include "winkel.h"

winkel::winkel()
{ 
    pah::file_clear();
    pah::grootOfKlein();

    pah::drogevoedingAfdeeling();
    droogVoeding();

    pah::drankenAfdeeling();
    drank();

    pah::nonFoodAfdeeling();
    geenEten();

    ofstream MyFile("output.txt", ios::app);

    for(int i=0; i<j; i++)
    {
        cout << droge_voeding.at(i)->prijs(aantalVoeding[i]) << endl;
        //MyFile << droge_voeding.at(i)->prijs(aantalVoeding[i]) << endl;
    }

    for(int i=0; i<k; i++)
    {
        cout << drinken.at(i)->prijs(aantalDrank[i]) << endl;
        //MyFile << drinken.at(i)->prijs(aantalDrank[i]) << endl;
    }

    for(int i=0; i<l; i++)
    {
        cout << non_food.at(i)->prijs(aantalNonFood[i]) << endl;
        //MyFile << non_food.at(i)->prijs(aantalNonFood[i]) << endl;
    }

    pah::afschijd();
    MyFile.close();
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
            do{
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
            do{
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
            do{
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

