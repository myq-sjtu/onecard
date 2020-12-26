#ifndef PLAYER_H
#define PLAYER_H

#include"pile.h"

class player{
protected:
    vector<card> inhand;
    int num;//玩家顺序
    int man;//是不是人:1是人
public:
    void drawcard(vector<card>*);
    card playcard(vector<card>*,card);
};

class NPC:public player{
public:
    NPC(){man=0;};    
};

class human:public player{
public:
    human(){man=1;};
};

#endif
