/* 观察者模式 - 建立一个一(subject)对多(observer)的依赖关系， 当一变化时， 依赖这个“一”的“多”能同步响应
 * 其有一个实例： MVC(Model-View-Control)
 */

#include <iostream>
#include "concrete_subject.h"
#include "concrete_observer.h"

int main( int /* argc */, char** /* argv */ )
{
    Subject* sub = new ConcreteSubject();
    
    Observer* worker1 = new ConcreteObserverA(sub);
    Observer* worker2 = new ConcreteObserverA(sub);
    Observer* worker3 = new ConcreteObserverB(sub);
    
    sub->setState("old");
    sub->notify();          // 通知各观察者响应(遍历观察者列表，调用update)
    sub->detach(worker2);
    sub->attach(worker1);
    sub->setState("new");
    sub->notify();
    sub->attach(worker2);
    sub->setState("add");
    sub->notify();
    return 0;
}