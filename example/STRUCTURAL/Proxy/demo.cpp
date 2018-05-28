// 代理模式有有几种应用场景：
// - 虚代理： 创建开销大的对象时
// - 远程代理: 为网上的对象创建一个局部的本地代理， 在网络状态不好时
// - 保护代理: 对对象进行控制访问时
// - 智能指针:
#include <iostream>
#include "proxy.h"

int main( int /* argc */, char** /* argv */ )
{
    Proxy serv;         // 只暴露了代理， 由代理来反馈给真实用户
    serv.request();
    
    return 0;
}