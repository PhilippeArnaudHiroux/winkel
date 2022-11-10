#include <iostream>
#include <vector>

#include "drogevoeding.h"
#include "koeken.h"
#include "wasmiddel.h"

using namespace std;

int main()
{
    vector <drogeVoeding*> droge_voeding;

    droge_voeding.push_back(new koeken("klein"));
    droge_voeding.push_back(new wasmiddel("groot"));

    for(int i=0; i<2; i++)
    {
        cout << droge_voeding.at(i)->prijs(4) << endl;
    }


    cout << "Hello World!" << endl;
    return 0;
}
