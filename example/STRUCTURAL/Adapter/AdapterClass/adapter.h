// 1. 用一个具体的适配器类对源对象(adaptee)和客户端目标（target）进行匹配 -> 当想要匹配一个类以及其子类时， 类适配器不可用
// 2. 适配器可以override(重定义/覆盖)源对象(adaptee)的部分行为

#pragma once

#include "third_party.h"        // Adaptee
#include "client.h"             // Target

// 类适配器 - 使用的是 方法
// private继承 - 获得实现继承的效果 - 通过继承，子类获得父类的实现 - 可以实现： 以父类实现
// public继承 - 获得接口继承的效果 - 通过继承，子类获得父类的接口 - 体现了： "is-a"
class Adapter : public Target, private Adaptee
{
public:
    Adapter() {}
    ~Adapter() {}
    
    // 继承自真实的需求， 用于返回期望的结果
    // private继承： 以Adaptee中的方法实现， 因为是使用方法， 所以可以不同具体创建对象
    void request()
    {
        this->SpecificRequest();
    }
protected:
private:
};