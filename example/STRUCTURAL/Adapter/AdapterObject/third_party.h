// 和之前的一模一样
#pragma once
#include <iostream>

// 已有的实现， 如第三方库
class Adaptee
{
public:
    Adaptee() {}
    ~Adaptee() {}
    
    void SpecificRequest()
    {
        std::cout << "这是已经有的实现" << std::endl;
    }
protected:
private:
};