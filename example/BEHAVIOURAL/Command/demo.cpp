/* 调动操作的对象(Invoker) 与 操作的具体实现(Command) 解耦
 * Invoker不关心怎么实现， Command可以内部解决问题， 也可以调用解决特定问题的对象
 * 将请求封装为类(Command-ConcreteCommand), 使得可以对客户的请求进行参数话
 * 
 * 这种模式和回调机制有些像(callback) ： 在适当的时候调用已经存在的方法响应请求
 */

#include <iostream>
#include "invoker.h"        // 命令的发出者
#include "concrete_command.h"
#include "receiver.h"       // 命令的执行者

int main( int /* argc */, char** /* argv */ )
{
    Receiver* rev = new Receiver();             // 有能解决请求的存在rev
    Command* cmd = new ConcreteCommand(rev);    // 对应的请求cmd
    
    Invoker* ivk = new Invoker(cmd);            // 请求者要了解有什么请求可以得到响应， 并指定一条请求cmd
    
    ivk->Invoke();      // 发出请求
    
    return 0;
}