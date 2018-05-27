#pragma once

#include "abstraction.h"

// 具体的抽象， 例如不同硬件平台下对同一个问题有不同的特化， 但对问题的接口是不变的
class RefineAbstraction : public Abstraction
{
public:
    RefineAbstraction( AbstractionImp* imp );
    
    ~RefineAbstraction() {}
    
    void operation();
protected:
private:
    AbstractionImp* imp_;
};