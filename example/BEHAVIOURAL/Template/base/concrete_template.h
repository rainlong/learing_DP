#pragma once

#include "template.h"

// 比如 拍出国证件照 ////////////////////////////
class ConcreteMethod1 : public AbstractMethod
{
public:
    ConcreteMethod1() {}
    virtual ~ConcreteMethod1() {}
protected:
    virtual void PrimitiveOperation1();
    virtual void PrimitiveOperation2();
private:
};

// 比如 拍一般证件照 ////////////////////////////
class ConcreteMethod2 : public AbstractMethod
{
public:
    ConcreteMethod2() {}
    virtual ~ConcreteMethod2() {}
protected:
    virtual void PrimitiveOperation1();
    virtual void PrimitiveOperation2();
private:
};