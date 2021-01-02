#include"game.h"
#include"linkedlist.h"

using namespace std;

game::game(int nofpile,int nofplayer){
    stock.initial(nofpile);
    allplayer.clear();
    for (int i=0;i<nofplayer-1;i++){
        NPC temp(i+1);
        allplayer.push_back(temp);
    }
    human temp(0);
    allplayer.push_back(temp);
    node_t *playerlist;
    for (int i=0;i<nofplayer;i++){ 
        if (i==0){
            playerlist=Initialize(&(allplayer[0]));
        } else {
            InsertLastList(&playerlist,&allplayer[i]);
        }
    }
    
}

int game::initialturn(){
    card startcard[allplayer.size()],temp;
    int i,k=0;
    printf("Determining the playing order...");
    // everyone draw a card
    for (i=0;i<=allplayer.size()-1;i++){
        while(1){
            allplayer[i].drawcard(&stock);
            if (allplayer[i].getinhand().front().returntype()==1){
                break;
            } else {
                allplayer[i].clear();
            }
        }
        startcard[i]=(allplayer[i].getinhand().front());
        allplayer[i].clear();
        cout<<"player"<<i+1<<": ";
        startcard[i].printcard();
    }
    // get the smallest card
    temp=startcard[0];
    for (i=0;i<=allplayer.size()-1;i++){
        if (startcard[i].returnnum()>temp.returnnum()){
            temp=*(startcard+i);
            k=i;
        } else {
            if ((startcard[i].returnnum()==temp.returnnum())&&(startcard[i].returncol()<temp.returncol())){
                temp=startcard[i];
                k=i;
            }
        }
    }
    return k;
}
