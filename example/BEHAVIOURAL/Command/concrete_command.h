/* 
 */

#pragma once

#include "command.h"

class Receiver;

class ConcreteCommand : public Command
{
public:
    ConcreteCommand() {}
    ConcreteCommand(Receiver *rev) : rev_(rev) {}
    virtual ~ConcreteCommand() {}
    
    virtual void Excute();
protected:
private:
    Receiver *rev_;     // 由特定对象来执行请求
};