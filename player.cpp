#include"player.h"

using namespace std;

void player::drawcard(stockpile *stockpiles){
    inhand.push_back((stockpiles->allcard).back());
    stockpiles->allcard.pop_back();
}

bool player::canplay(card lastcard){
    vector<card> canplay;
    bool test;
    for (int i=0;i<inhand.size();i++){
        if (inhand[i].returncol()==lastcard.returncol() || inhand[i].returnnum()==lastcard.returnnum()){
            canplay.push_back(inhand[i]);
        }
    }
    if (canplay.size()!=0){
        test=true;
    } else {
        test=false;
    }
    return test;
}

card NPC::playcard(discardpile* discardpiles,card lastcard){
    vector<card> canplay;
    for (int i=0;i<inhand.size();i++){
        if (inhand[i].returncol()==lastcard.returncol() || inhand[i].returnnum()==lastcard.returnnum()){
            canplay.push_back(inhand[i]);
        }
    }
    int theone=rand()%canplay.size();
    for (int i=0;i<inhand.size();i++){
        if (inhand[i]==canplay[theone]){
            inhand.erase(inhand.begin()+i);
            discardpiles->allcard.push_back(inhand[i]);
            break;
        }
    }
    return canplay[theone];
}

int human::choose(vector<card> canplay){
    cout<<"now choose a number:";
    int i;
    cin>>i;
    return i;
}

card human::playcard(discardpile* discardpiles,card lastcard){
    vector<card> canplay;
    for (int i=0;i<inhand.size();i++){
        if (inhand[i].returncol()==lastcard.returncol() || inhand[i].returnnum()==lastcard.returnnum()){
            canplay.push_back(inhand[i]);
        }
    }
    int theone=choose(canplay);
    for (int i=0;i<inhand.size();i++){
        if (inhand[i]==canplay[theone]){
            inhand.erase(inhand.begin()+i);
            discardpiles->allcard.push_back(inhand[i]);
            break;
        }
    }
    return canplay[theone];
}

