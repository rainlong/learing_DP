#ifndef SOLDIER_H__
#define SOLDIER_H__

#include "abstract_race.h"
#include "abstract_equipment.h"

/** @brief 工厂基类
 */
class AbstractSoldier {
public:
    virtual ~AbstractSoldier() = 0;
    virtual void create() = 0;
protected:
    AbstractRace *r;
    AbstractEquipment *e;
};

AbstractSoldier::~AbstractSoldier() {}      // 必须提供纯虚析构函数的定义

#endif