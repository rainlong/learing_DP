// 最常用， 也是最简单的一种模式 - 用组合的方式， 在Facade中调用第三方文件

// 注意与对象适配器作区分
#include <iostream>
#include "facade.h"

int main( int /* argc */, char** /* argv */ )
{
    Facade* tool = new Facade();
    
    tool->operationWrapper();
    
    return 0;
}