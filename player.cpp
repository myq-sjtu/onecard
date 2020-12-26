#include"player.h"

using namespace std;

void player::drawcard(vector<card> *stockpiles){
    inhand.push_back(stockpiles->back());
    stockpiles->pop_back();
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
