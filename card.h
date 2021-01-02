#ifndef CARD_H
#define CARD_H

#include<vector>
#include<iostream>
#include<ctime>

using namespace std;

typedef struct node{
    player *pl;
    struct node *next;
    struct node *front;
}node_t;


class card{
private:
    int type;//0 is functional,1 is number
    int color;// 0 for wan neng pai;
    int number;//for functional, 0
public:
    bool operator== (card);
    card(){type=color=number=-1;};
    card(int,int,int);
    int returntype(){return type;};
    int returncol(){return color;};
    int returnnum(){return number;};
    void printcard();
    void printfunc();
    void printnum();
};

#endif
