#include "productList.h"
#include <iostream>
using std::cout;
using std::endl;

void Monster::show() {
    cout << "HP: " << hp << "\tATK: " << atk << "\tDEF: " << def << endl;
}

//////////////////////////////
Eldar::Eldar() {
    hp = 100;
    atk = 40;
    def = 20;
    spd = 40;
}

void Eldar::show() {
    cout << "灵族： ";
    Monster::show();
    cout << "远程专精" << endl;
}


//////////////////////////////
Orc::Orc() {
    hp = 180;
    atk = 30;
    def = 35;
    spd = 30;
}

void Orc::show() {
    cout << "绿皮： ";
    Monster::show();
    cout << "近战狂暴" << endl;
}