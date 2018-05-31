/* 问题： 对聚合对象的遍历问题， 将这种遍历封装到一个类中， 避免暴露聚合对象的内部表示
 */

#include <iostream>
#include "iterator.h"
#include "container.h"

int main( int /* argc */, char** /* argv */ )
{
    Container* ct = new ConcreteContainer();
    Iterator* it = ct->createIterator();        // 第一种
//     Iterator* it = new ConcreteIterator(ct);    // 第二种
    
    for( ; !(it->isDone()) ; it->next() )
    {
        std::cout << it->currentItem() << std::endl;
    }
    
    return 0;
}