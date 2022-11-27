#ifndef TEST_H
#define TEST_H

#include "tekst.h"
#include <iostream>

class test : public tekst
{
public:
    test();

    // tekst interface
public:
    void tekst_afdeeling();
};

#endif // TEST_H
