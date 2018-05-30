/* 问题： 需求频繁变更使得系统不封闭
 * 访问者模式： 将更新(/变化)封装到一个类中(访问操作Visitor)， 并由待改变的类提供一个接受接口
 * 
 * 适用性：
 * - 1) 一个对象结构包含许多类对象， 它们有不同的接口， 想对这些对象实施一些依赖于其具体类的操作
 * - 2) 需要对一个对象结构中的对象进行许多不同且不相关的操作， 而你想避免让这些操作“污染”这些对象的类
 * - 3) 定义对象结构的类很少改变（Element-ConcreteElement）， 但经常需要在此结构上定义新的操作（ConcreteVisitor）
 * 
 * 关键： 双分派(Double-Dispatch) - C++支持的是单分派 - 只能用不同方法的形式来实现
 */

#include <iostream>
#include "concrete_element.h"
#include "concrete_visitor.h"

int main( int /* argc */, char** /* argv */ )
{
    NodeVisitor* vis1 = new ConcreteVisitor_1();
    NodeVisitor* vis2 = new ConcreteVisitor_2();
    
    Element* elma = new ConcreteElementA();
    Element* elmb = new ConcreteElementB();
    
    elma->accept(vis1);
    elmb->accept(vis2);
    return 0;
}