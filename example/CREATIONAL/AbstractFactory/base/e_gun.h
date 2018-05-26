#pragma once

#include "abstract_equipment.h"

class Gun : public AbstractEquipment
{
    public:
    virtual int equip()
    {
        cout << "装备枪" << endl;
        dsp = 40;
        return 1;
    }
};