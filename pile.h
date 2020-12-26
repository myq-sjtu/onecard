#ifndef PILE_H
#define PILE_H

#include"card.h"
#include<ctime>

using namespace std;

class pile{
protected:
    vector<card> allcard;
public:
    pile()=default;
    void shuffle();
    virtual ~pile(){};
};

class stockpile:public pile{
public:
    stockpile(int);
};

class discardpile:public pile{
public:
    discardpile();
    vector<card> pullout();
};

#endif