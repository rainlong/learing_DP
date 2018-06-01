/* 在不同状态时有不同表现， 状态之间存在转移关系
 * 规模小时使用 switch/case + enum
 * 
 * 问题： 状态转移过程中的状态对象怎么处理？(申请销毁)
 */

#include <iostream>
#include "context.h"
#include "concrete_state.h"

int main( int /* argc */, char** /* argv */ )
{
    State* st = new ConcreteStateA();
    
    Context* context = new Context(st);     // 初始状态
    
    context->OperationChangeState();
    context->OperationChangeState();
    
    if( context != NULL )
        delete context;
    if( st != NULL )
        delete st;
    
    return 0;
}