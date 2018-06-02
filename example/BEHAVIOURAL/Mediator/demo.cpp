/* 问题： 随着系统中对象数量的扩大， 对象间通信变复杂。
 * 中介者模式： 将对象间交互和通信封装在一个类中， 从只需要对这一个类进行操作实现对象间的通信
 * 
 * 对比： 外观模式
 */

#include <iostream>
#include "concrete_mediator.h"
#include "concrete_colleague.h"

// 本例实现过程中有许多不足之处， 主要问题在于成员向中介传递消息的形式
// - 有一种类似状态模式， 由成员提供获取自身状态以及设置状态的接口， 通过中介者进行对接
// - 本例的消息类型是string， 在通讯阶段直接向中介者发出了消息

int main( int /* argc */, char** /* argv */ )
{
    Colleague* A = new ConcreteColleagueA();
    Colleague* B = new ConcreteColleagueB();
    Mediator* mdt = new ConcreteMediator(A, B);     // 指定对象
    A->setMediator(mdt);
    B->setMediator(mdt);
    
    A->notify();
    
    
    return 0;
}