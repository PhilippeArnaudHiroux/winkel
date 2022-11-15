#ifndef DROGEVOEDING_H
#define DROGEVOEDING_H

#include <string>


class drogeVoeding
{
public:
    drogeVoeding(std::string groot_of_klein); //Constructor
    ~drogeVoeding(); //Destructor

    virtual float prijs(int aantal) = 0; //Virtuele functie

protected:
    std::string groot_of_klein;
    float product_prijs = 0;
};

#endif // DROGEVOEDING_H
