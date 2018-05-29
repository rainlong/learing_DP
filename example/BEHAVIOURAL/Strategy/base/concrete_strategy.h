#pragma once

#include "strategy.h"

class ConcreteStrategy1 : public Strategy
{
public:
    ConcreteStrategy1() {}
    virtual ~ConcreteStrategy1() {}
    
    virtual void Method();
protected:
private:
};

class ConcreteStrategy2 : public Strategy
{
public:
    ConcreteStrategy2() {}
    virtual ~ConcreteStrategy2() {}
    
    virtual void Method();
protected:
private:
};