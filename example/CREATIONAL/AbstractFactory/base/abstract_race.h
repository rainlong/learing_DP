#ifndef MONSTER_H__
#define MONSTER_H__

#include <iostream>

class AbstractRace {
public:
    virtual void show()
    {
        std::cout << "HP: " << hp << "\tATK: " << atk << "\tDEF: " << def << std::endl;
    }
    inline void changeATK(int t) { atk += t; }
protected:
    int hp, atk, def, spd;
    int STR, INT, CON, LCK;
};

#endif