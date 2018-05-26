#pragma once

#include "abstract_soldier.h"
#include "r_eldar.h"
#include "e_gun.h"

// 工厂1
class EldarSoldier : public AbstractSoldier
{
public:
    virtual ~EldarSoldier() {}
    virtual void create()
    {
        r = new Eldar();
        r->show();
        e = new Gun();
        e->equip();
        r->changeATK(e->getDSP());      // 这里无法体现灵族的远程专精
        r->show();
    }
};
