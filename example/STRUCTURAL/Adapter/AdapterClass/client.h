#pragma once
#include <iostream>

// 真实的需求
class Target
{
public:
    Target() {}
    virtual ~Target() {}
    
    virtual void request()
    { std::cout << "真实的需求" << std::endl; }
protected:
private:
};