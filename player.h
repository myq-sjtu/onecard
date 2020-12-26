#ifndef PLAYER_H
#define PLAYER_H

#include"pile.h"

class player{
protected:
    vector<card> inhand;
    int num;//玩家顺序
public:
    void drawcard(vector<card>*);
    virtual void playcard(vector<card>*)=0;
};

class NPC:public player{
public:
    void playcard(vector<card>*);
};

class human:public player{
public:
    void playcard(vector<card>*);
};

#endif
