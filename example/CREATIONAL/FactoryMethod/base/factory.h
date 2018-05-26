#ifndef FACTORY_H__
#define FACTORY_H__

#include "productList.h"

/** @brief 工厂基类
 */
class Factory {
public:
    virtual ~Factory() = 0;
    virtual void create() = 0;
protected:
    Monster *t;
};

// 工厂1
class EldarFactory : public Factory
{
public:
    virtual ~EldarFactory() {}
    virtual void create();
};

// 工厂2
class OrcFactory : public Factory
{
public:
    virtual ~OrcFactory() {}
    virtual void create();
};

#endif