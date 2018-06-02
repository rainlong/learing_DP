/* 
 */

#pragma once

#include "colleague.h"  // 因为在下面用了Colleague::State&， 这是一大败笔

class Colleague;    // 前向声明

// 将多(colleague)对多(colleague)的通信变为一(mediator)对多(colleague)的通信
class Mediator
{
public:
    virtual ~Mediator() {}
    
    virtual void notifyColleagueB(Colleague::State&) = 0;    // A向B， 调用A的请求 和 B的响应
    virtual void notifyColleagueA(Colleague::State&) = 0;    // B给A， 调用B的请求 和 A的响应
    
protected:
    Mediator() {}
private:
};