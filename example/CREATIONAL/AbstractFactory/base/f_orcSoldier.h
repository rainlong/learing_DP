#pragma once

#include "abstract_soldier.h"
#include "r_orc.h"
#include "e_sword.h"

// 工厂2
class OrcSoldier : public AbstractSoldier
{
public:
    virtual ~OrcSoldier() {}
    virtual void create()
    {
        r = new Orc();
        r->show();
        e = new Sword();
        e->equip();
        r->changeATK(e->getDSP());
        r->show();
    }
};