#include "koeken.h"
//#include "pah.h"

koeken::koeken(string groot_of_klein) : drogeVoeding(groot_of_klein) //Constructor
{
    setProduct_prijs(2.99);


}

koeken::~koeken() //Destructor
{}

float koeken::prijs(int aantal) //Virtuele functie
{
    ofstream t;
    t.open("output.txt", ios::app);

    if(groot_of_klein == "klein")
    {
        cout << "koeken klein -> " << getProduct_prijs() << " * " << aantal << " = ";
        t << "test -> " << getProduct_prijs() * aantal << " <- test1" << endl;
        //pah::test(getProduct_prijs()*aantal);
        return getProduct_prijs() * aantal;
    }
    else
    {
        cout << "koeken groot -> " << getProduct_prijs() * 1.7 << " * " << aantal << " = ";
        t << "test -> " << getProduct_prijs() * aantal * 1.7 << " <- test2" << endl;
        //pah::test(getProduct_prijs()*aantal*1.7);
        return getProduct_prijs() * 1.7 * aantal;
    }
}
