/* 保证包装器和被包装对象有一致的接口
 */

#pragma once

class Component
{
public:
    virtual ~Component() {}         // 析构函数千万不能设为纯虚， 如果一定要设，要在cpp文件中实现，在h文件实现会报多次定义
    virtual void operation() = 0;
protected:
    Component() {}
private:
};