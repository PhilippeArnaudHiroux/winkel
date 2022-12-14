#include "winkel.h"

winkel::winkel()
{
    tekst::grootOfKlein();

    tekst::drogevoedingAfdeeling();
    droogVoeding();

    tekst::drankenAfdeeling();
    drank();

    for(int i=0; i<1; i++)
    {
        cout << droge_voeding.at(i)->prijs(aantal[i]) << endl;
        cout << drinken.at(0)->prijs(aantal[i+1]);
    }

}
winkel::~winkel()
{}

void winkel::droogVoeding()
{
    do{
       cout << "Keuze: ";
       cin >> keuze;

        if(keuze > 0 && keuze < 4)
        {
            do{
                cout << "Klein of groot: ";
                cin >> grootOfKlein;
            }while(grootOfKlein != "klein" && grootOfKlein != "groot");

            cout << "Aantal: ";
            cin >> aantal[j];

            if(keuze == 1)
            {
                droge_voeding.push_back(new koeken(grootOfKlein));
            }
            else if(keuze == 2)
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
    }while(keuze != 0);
}

void winkel::drank()
{
    do{
       cout << "Keuze: ";
       cin >> keuze;

        if(keuze > 0 && keuze < 4)
        {
            do{
                cout << "Klein of groot: ";
                cin >> grootOfKlein;
            }while(grootOfKlein != "klein" && grootOfKlein != "groot");

            cout << "Aantal: ";
            cin >> aantal[j];

            if(keuze == 1)
            {
                drinken.push_back(new water(grootOfKlein));
            }
            else if(keuze == 2)
            {
                drinken.push_back(new fruitsap(grootOfKlein));
            }
            else
            {
                drinken.push_back(new wijn(grootOfKlein));
            }

            j++;
        }

        cout << endl;
    }while(keuze != 0);
}
