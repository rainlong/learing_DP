#include <iostream>
#include "adapter.h"
#include "client.h"

int main( int /* argc */, char** /* argv */ )
{
    // 注意这里的不同， 创建实例对象一般意味着里面含有属性(成员变量)， 在使用它们处理问题时需要利用这些属性
    Adaptee* ade = new Adaptee();
    
    Target* adt = new Adapter(ade); // 组合的方式
    
    adt->request();
    
    return 0;
}