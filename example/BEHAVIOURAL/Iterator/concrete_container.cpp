#include "container.h"
#include <iostream>
#include "iterator.h"       // 具体实现

Iterator* ConcreteContainer::createIterator()
{
    return new ConcreteIterator(this);      // 注意迭代器也要绑定容器
}

ConcreteContainer::Object ConcreteContainer::getItem(int idx)      // 这里是顺序容器， 才能用idx来获取
{
    if( idx < this->getSize() )
        return objs_[idx];
    else return -1;                 // 这里已知返回的是int
}

int ConcreteContainer::getSize()
{
    return ct_size;
}