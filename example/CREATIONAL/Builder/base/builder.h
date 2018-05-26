/* 构建者的行为
 * - 没有先后顺序， 针对产品的各个部件的实现行为
 */

#pragma once

#include "product.h"

class Builder
{
public:
    virtual void BuildCPU() = 0;
    virtual void BuildMainboard() = 0;
    virtual void BuildHD() = 0;
    virtual void BuildMem() = 0;
    virtual void BuildPower() = 0;
    virtual void BuildOS() = 0;
    virtual Computer getComputer() = 0;
protected:
private:
    
};

class ConcreteBuilder_1 : public Builder
{
public:
    virtual void BuildCPU()
    {
        pc->add(CPU, "Intel i7");
    }
    virtual void BuildMainboard()
    {
        pc->add(MAINBOARD, "ASUS");
    }
    virtual void BuildHD()
    {
        pc->add(HD, "WD 1T");
    }
    virtual void BuildMem()
    {
        pc->add(MEM, "8G");
    }
    virtual void BuildPower()
    {
        pc->add(POWER, "350W");
    }
    virtual void BuildOS()
    {
        pc->add(OS, "Win7");
    }
    virtual Computer getComputer()
    {
        return *pc;
    }
    
public:
    ConcreteBuilder_1() : pc(new Computer())
    {
    }
        
private:
    Computer* pc;
};