#pragma once

#include "subject.h"

// 实现方法， 可以有成员变量
// “我知道该怎么做， 也知道为了什么而做”
class ConcreteSubject : public Subject
{
public:
    ConcreteSubject() {}    // 可以有输入
    virtual ~ConcreteSubject() {}
    virtual void request()
    { std::cout << "知道该怎么做， 也知道为了什么而做， 但不想自己做" << std::endl; }
protected:
private:
    // 可以有成员变量
};