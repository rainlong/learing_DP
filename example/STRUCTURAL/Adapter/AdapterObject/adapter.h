/// 1. 允许适配器与多个源对象(adaptee)(及其子类)同时工作。 Adapter也可以一次给所有源对象添加功能。
/// 2. 无法override(重定义/覆盖)源对象的行为 -> 强行这么做的办法是： 先做apdatee的子类， 然后对这个子类 用类适配器来适配

#pragma once

#include "third_party.h"        // Adaptee
#include "client.h"             // Target

/// 对象适配器 - 使用的是 实例对象
/// 用 组合的方式 实现对Apaptee的复用
class Adapter : public Target   // 这里不再使用private继承
{
public:
    Adapter(Adaptee* ade)       // 传递实例对象的指针
    {
        this->ade_ = ade;
    }
    ~Adapter() {}
    
    // 继承自真实的需求， 用于返回期望的结果
    // 
    void request()
    {
        ade_->SpecificRequest();
    }
protected:
private:
    Adaptee* ade_;              // 调用对象中的方法来实现
};