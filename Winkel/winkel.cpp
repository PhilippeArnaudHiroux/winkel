#include "winkel.h"

winkel::winkel()
{


    tekst_groot_of_klein();
    tekst_drogevoeding();

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

    for(int i=0; i<j; i++)
    {
        cout << droge_voeding.at(i)->prijs(aantal[i]) << endl;
    }
}
winkel::~winkel()
{}

void winkel::tekst_groot_of_klein()
{
    cout << "***** Klein of groot *****" << endl;
    cout << "Voor klein type klein" << endl;
    cout << "Voor groot type groot" << endl << endl;
}

void winkel::tekst_drogevoeding()
{
    cout << "***** Welkom bij droge voeding *****" << endl;
    cout << "Als je koeken wilt kopen duw dan op 1" << endl;
    cout << "Als je wasmiddel wilt kopen duw dan op 2" << endl;
    cout << "Als je conserven wilt kopen duw dan op 3" << endl;
    cout << "Als je naar de volgende afdeling wilt duw dan op 0" << endl;
}
