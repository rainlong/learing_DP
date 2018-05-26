/* 拷贝构造函数 和 原型模式 的区分
 * - 前者复制一个已有对象， 后者通过克隆自身来创建对象
 * - 前者的新生对象只能是类本身， 而后者生成的对象可能是一个派生类
 * - 前者是实现后者的一种具体实现方法， 概念上是不同的 - 后者是一种通用方法(概念)
 */

#pragma once
#include <iostream>
using std::cout;
using std::endl;

class AntPrototype
{
public:
    virtual ~AntPrototype() {}
    virtual AntPrototype* clone() const = 0;
protected:
    AntPrototype() {}
private:
};


// 蚁群算法中的蚂蚁
class Ant : public AntPrototype
{
public:
    Ant() {}
    Ant( const Ant& cp ) {}         // 原型模式的具体实现 看 拷贝构造函数
    ~Ant() {}
    AntPrototype* clone() const     // 原型克隆的接口
    {
//         cout << this << endl;
        return new Ant(*this);      // 调用拷贝构造函数
    }
protected:
private:
};