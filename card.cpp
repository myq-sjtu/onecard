#include"card.h"

using namespace std;

bool card::operator==(card tar){
    bool test;
    if (tar.returncol()==color && tar.returnnum()==number && tar.returntype()==type){
        test=true;
    } else {
        test=false;
    }
    return test;
}

void card::printfunc(){
    switch(color){
        case 0:{
            cout<<"万能牌 ";
            break;
        }
        case 1:{
            cout<<"红 ";
            break;
        }
        case 2:{
            cout<<"蓝 ";
            break;
        }
        case 3:{
            cout<<"绿 ";
            break;
        }
        case 4:{
            cout<<"黄 ";
            break;
        }
        default: break;
    }
    switch(number){
        case 0:{
            cout<<"+2 ";
            break;
        }
        case 1:{
            cout<<"转向 ";
            break;
        }
        case 2:{
            cout<<"禁 ";
            break;
        }
        case 3:{
            cout<<"+4 ";
            break;
        }
        case 4:{
            cout<<"变色 ";
            break;
        }
        default: break;
    }
}

void card::printnum(){
    switch(color){
        case 0:{
            cout<<"万能牌 ";
            break;
        }
        case 1:{
            cout<<"红 ";
            break;
        }
        case 2:{
            cout<<"蓝 ";
            break;
        }
        case 3:{
            cout<<"绿 ";
            break;
        }
        case 4:{
            cout<<"黄 ";
            break;
        }
        default: break;
    }
    cout<<number<<' ';
}

card::card(int a,int b, int c){
    type=a;
    color=b;
    number=c;
}

void card::printcard(){
    switch(type){
        case 0:{
            printfunc();
            break;
        }
        case 1:{
            printnum();
            break;
        }
    }
}