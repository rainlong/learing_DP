#include "r_orc.h"
#include <iostream>

Orc::Orc() {
    hp = 180;
    atk = 30;
    def = 35;
    spd = 30;
}

void Orc::show() {
    std::cout << "绿皮： ";
    AbstractRace::show();
    std::cout << "近战狂暴" << std::endl;
}