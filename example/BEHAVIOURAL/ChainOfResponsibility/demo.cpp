/* 问题： 基于消息， 事件驱动 - 在请求链上传递的消息 直到有个对象来处理该请求
 */

#include <iostream>
#include "handler.h"

int main( int /* argc */, char** /* argv */ )
{
    Handler* h1 = new ConcreteHandlerA();
    Handler* h2 = new ConcreteHandlerA(h1);     // h2->h1
    Handler* h3 = new ConcreteHandlerB(h2);     // h3->h2->h1
//     h1->setSuccessor(h3);    // 死循环
    
    h3->handleRequest();
    return 0;
}