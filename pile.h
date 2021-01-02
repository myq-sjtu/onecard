#ifndef PILE_H
#define PILE_H

#include"card.h"
#include<ctime>

using namespace std;

class pile{
public:
    vector<card> allcard;
    pile()=default;
    void shuffle();
    virtual ~pile(){};
};

class stockpile:public pile{
public:
    void initial(int);
    stockpile(){};
};

class discardpile:public pile{
public:
    discardpile();
    vector<card> pullout();
};

#endif