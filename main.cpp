#include"game.h"

int main(){
    int piles,players;
    cout<<"number of piles: ";
    cin>>piles;
    cout<<"number of players: ";
    cin>>players;
    game thisgame(piles,players);
    thisgame.onegame();
}