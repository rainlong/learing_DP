/* 对于同一业务逻辑， 在不同对象中有不同的细节实现， 但逻辑(算法)框架是相同的。
 *  - 采用继承(一种强约束) - 将算法框架放在抽象基类中， 定义好细节接口， 在子类中实现细节
 *  - 具有【继承】固有的问题
 * 与Strategy相比， 解决的问题类似， 但策略模式是采用封装+组合(委托)的方式来解决， 代价是空间和时间
 */

#include <iostream>
#include "template.h"
#include "concrete_template.h"

int main( int /* argc */, char** /* argv */ )
{
    AbstractMethod* am1 = new ConcreteMethod1();
    am1->TemplateMethod();
    
    AbstractMethod* am2 = new ConcreteMethod2();
    am2->TemplateMethod();
    
    return 0;
}