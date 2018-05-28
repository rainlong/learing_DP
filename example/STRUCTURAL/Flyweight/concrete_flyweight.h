// 由享元工厂使用
#pragma once

#include "flyweight.h"

class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(std::string intrinsicState);
    ~ConcreteFlyweight();
    virtual void operation( const std::string& extrinsicState );
protected:
private:
};