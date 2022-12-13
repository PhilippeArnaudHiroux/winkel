#include "winkel.h"

winkel::winkel()
{
    tekst::grootOfKlein();
    tekst::drogevoeding();

    droogVoeding();

    for(int i=0; i<j; i++)
    {
        cout << droge_voeding.at(i)->prijs(aantal[i]) << endl;
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
