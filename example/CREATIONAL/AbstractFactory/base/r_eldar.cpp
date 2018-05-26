#include "r_eldar.h"
#include <iostream>
using std::cout;
using std::endl;

Eldar::Eldar() {
    hp = 100;
    atk = 40;
    def = 20;
    spd = 40;
}

void Eldar::show() {
    cout << "灵族： ";
    AbstractRace::show();
    cout << "远程专精" << endl;
}