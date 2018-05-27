#ifndef CONCRETE_ABSTRACTIONIMP_H__
#define CONCRETE_ABSTRACTIONIMP_H__

#include "abstractionImp.h"

class ConcreteAbstractionImpA : public AbstractionImp
{
public:
    ConcreteAbstractionImpA() {}
    ~ConcreteAbstractionImpA() {}
    virtual void operation();
protected:
private:
};

class ConcreteAbstractionImpB : public AbstractionImp
{
public:
    ConcreteAbstractionImpB() {}
    ~ConcreteAbstractionImpB() {}
    virtual void operation();
protected:
private:
};

#endif