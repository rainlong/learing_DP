/** 抽象工厂
 * 批量创建eldar和orc，配有默认武器
 */
#include <iostream>
#include "abstract_soldier.h"
#include "f_eldarSoldier.h"
#include "f_orcSoldier.h"

int main( int /* argc */, char** /* argv */ )
{
    AbstractSoldier *s = new EldarSoldier();
    s->create();
    delete(s);
    
    s = new OrcSoldier();
    s->create();
    delete(s);
    
    return 0;
}