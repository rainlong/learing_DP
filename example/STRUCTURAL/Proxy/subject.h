#pragma once
#include <iostream>

// 真实的需求
// 抽象出方法， 没有成员变量(就好像没有特定的目的) - “我知道该怎么做， 但我做是为了什么是不知道”
// 对需求的实现而言， 需要实现方法，并且明确对象
// 对代理而言， 需要知道实际的实现， 然后调用它， 所以真正执行的是具体主题的行为， 而实际暴露给外界的是代理对象
class Subject
{
public:
    virtual ~Subject() {}
    
    virtual void request() = 0;
//     { std::cout << "我只知道该怎么做" << std::endl; }
protected:
    Subject() {}
private:
};