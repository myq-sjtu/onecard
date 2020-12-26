#ifndef CARD_H
#define CARD_H

#include<vector>
#include<iostream>

using namespace std;

class card{
private:
    int type;//0 is functional,1 is number
    int color;// 0 for wan neng pai;
    int number;//for functional, 0
public:
    card(int,int,int);
    void printcard();
    void printfunc();
    void printnum();
};

#endif
