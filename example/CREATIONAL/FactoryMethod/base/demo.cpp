/** 工厂方法
 * 批量创建eldar和orc
 */
#include <iostream>
#include "factory.h"

int main( int /* argc */, char** /* argv */ )
{
    Factory *f = new EldarFactory();
    f->create();
    delete(f);
    
    f = new OrcFactory();
    f->create();
    delete(f);
    
    return 0;
}