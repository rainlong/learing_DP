#pragma once

#include <vector>       // 容器/元素池
#include "flyweight.h"

class FlyweightFactory
{
public:
    FlyweightFactory();
    ~FlyweightFactory();
    
    Flyweight* getFlyweight( const std::string& key );  // 从池中获得共享对象的接口
protected:
private:
    std::vector<Flyweight*> fly_;       // 对象池 - 有管理的需求 - 查找、插入， 其他方法如Hash表等
};