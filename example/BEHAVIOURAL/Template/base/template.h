/* 模板模式获得一种反向控制结构的效果， DIP(Dependency Inversion Principles) -  低层模块实现(依赖)高层模块
 * 
 * 不足： 
 * - 继承的强制性使得原语操作只能由AbstractMethod使用， 对其的变形(如继承于AbstractMethod的拓展子类)则不能复用ConcreteMethod的方法
 */

#pragma once

#include <iostream>

class AbstractMethod
{
public:
    virtual ~AbstractMethod() {}
    
    void TemplateMethod()               // 相当于策略模式的Context
    {
        std::cout << "按照一定逻辑组织详细的算法实现，抽象出其中对细节敏感的部分由子类实现" << std::endl;
        this->PrimitiveOperation1();    // 注意这里要有this， 因为子类在调用这个方法时要用子类中的实现
        this->PrimitiveOperation2();
    }
protected:
    AbstractMethod() {}
    
    // 原语算法 - 细节操作， 要放在protected中， 对外隐藏， 相当于策略模式的Strategy
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
private:
};