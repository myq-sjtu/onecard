#include"player.h"

using namespace std;

void player::drawcard(vector<card> *stockpiles){
    inhand.push_back(stockpiles->back());
    stockpiles->pop_back();
}


