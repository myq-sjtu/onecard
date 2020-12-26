#ifndef GAME_H
#define GAME_H

#include"player.h"

using namespace std;

class game{
private:
    stockpile stock;
    discardpile discard;
    vector<player> allplayer;
    vector<int> score;
public:
    game(int,int,int);
    card oneturn();
    int onegame();
};

#endif
