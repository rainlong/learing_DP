/* 对于同一业务逻辑， 在不同对象中有不同的细节实现， 但逻辑(算法)框架是相同的。
 * - 采用 封装+组合(委托)
 * - - 将算法框架放在类中， 用过组合的方式， 将具体算法在组合对象中实现；
 * - - 再用委托的方式将抽象接口的实现委托给组合对象实现
 * 
 * 与Template相比 解决的问题类似， template使用继承(强约束)， 复用具体实现的难度大
 */

#include <iostream>
#include "context.h"
#include "concrete_strategy.h"

int main( int /* argc */, char** /* argv */ )
{
    Strategy* ps = new ConcreteStrategy1();
    
    Context* pc = new Context(ps);
    
    pc->DoAction();
    
    return 0;
}