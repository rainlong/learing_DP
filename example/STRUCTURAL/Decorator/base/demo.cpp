/* 在添加新的职责/操作时， 1）用继承实现 - 继承的深度不断增加， 增加了系统复杂性 -> 为一个类添加一些新的职责
 * 2) 用组合的方式实现 -> 装饰模式 ： decorator/wrapper -> 动态地为一个对象添加一些额外的职责
 */

// 这个模式看上去是有问题的：
// 1) 中间的装饰过程会遗留下装饰的痕迹， 这些痕迹可以都持有底层对象， 中间任何一环被析构都会出问题
// 2） 有没有办法能让装饰器的装饰效果可以更新到对象中？？？
#include <iostream>
#include "concrete_element.h"
#include "concrete_decorator.h"

using std::cout;
using std::endl;

int main( int /* argc */, char** /* argv */ )
{
    Component* com = new ConcreteComponent();
    Component* wrapper1 = new ConcreteWrapperA(com);
    Component* wrapper2 = new ConcreteWrapperB(wrapper1); // 要加上上一个对象
    wrapper2->operation();
//     delete com;                 // 装饰器具有传递性， 之前创建的被移除时， 会报段错误
//     wrapper2->operation();
    
    delete wrapper2;    // 自动调用各级析构函数， 下面的不用执行(会报段错误)
//     delete wrapper1;
//     delete com;
    return 0;
}