#include"player.h"

using namespace std;

void player::drawcard(stockpile *stockpiles){
    inhand.push_back((stockpiles->allcard).back());
    stockpiles->allcard.pop_back();
}

card player::playcard(vector<card>* discardpiles,card thecard){
    for (int i=0;i<inhand.size();i++){
        if (inhand[i]==thecard){
            card temp=inhand[i];
            inhand.erase(inhand.begin()+i,inhand.begin()+i+1);
            discardpiles->push_back(temp);
        }
    }
}


