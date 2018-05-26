#pragma once

#include "abstract_equipment.h"

class Sword : public AbstractEquipment
{
public:
    virtual int equip()
    {
        cout << "装备剑" << endl;
        dsp = 50;
        return 2;
    }
};