#ifndef PLAYER_H
#define PLAYER_H

#include"pile.h"

class player{
protected:
    vector<card> inhand;
    int num;//玩家顺序
    int man;//是不是人:1是人
    int score;
public:
    vector<card> getinhand(){return inhand;};
    void clear(){inhand.clear();};
    player(){};
    void drawcard(stockpile*);
    card playcard(vector<card>*,card);
};

class NPC:public player{
public:
    NPC(int a){man=0;num=a;};    
};

class human:public player{
public:
    human(int a){man=1;num=a;};
};

#endif
