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
    game(int,int);
    int initialturn();
    card initialcard();
    void initialinhand();
    card oneturn(card,int);
    int onegame();
    ~game();
};

#endif
