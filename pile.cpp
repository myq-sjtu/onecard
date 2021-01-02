#include"pile.h"

using namespace std;

void pile::shuffle(){
    for (int i=0;i<10*allcard.size();i++){
        int a=rand()%allcard.size();
        int b=rand()%allcard.size();
        card temp=allcard[a];
        allcard[a]=allcard[b];
        allcard[b]=temp;
    }
}

void stockpile::initial(int num){
    for (int i=0;i<num;i++){
        for (int j=1;j<5;j++){
            for (int k=1;k<10;k++){
                card temp(1,j,k);
                allcard.push_back(temp);
            }
        }
    }
    for (int j=0;j<5;j++){
        for (int k=0;k<5;k++){
            card temp(0,j,k);
            allcard.push_back(temp);
        }
    }
    shuffle();
}

discardpile::discardpile(){
    allcard.clear();
}

vector<card> discardpile::pullout(){
    vector<card> temp=allcard;
    allcard.clear();
    return temp;
}
