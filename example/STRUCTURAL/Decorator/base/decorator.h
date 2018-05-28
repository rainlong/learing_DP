/* 
 */

#pragma once

#include "element.h"

// 用组合的方式， 在类中持有一个指向对象的指针， 然后调用功能， 这样做的弊端是： 每个具体装饰都持有上一次的装饰成果
// 添加操作的实现 是依靠类似递归的方法
class Wrapper : public Component
{
public:
    Wrapper(Component* com)
    {
        this->com_ = com;
    }
    ~Wrapper()
    {
        delete com_;
    }
    
    virtual void operation()
    {
        com_->operation();
    }
protected:
    Component* com_;
private:
};