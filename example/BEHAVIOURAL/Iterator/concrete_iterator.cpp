#include "iterator.h"
#include <iostream>
#include "container.h"

using namespace std;

ConcreteIterator::ConcreteIterator( Container* ct, int idx ) : ct_(ct), idx_(idx)
{
    
}

ConcreteIterator::~ConcreteIterator() {}

void ConcreteIterator::begin()
{
    idx_ = 0;
}

void ConcreteIterator::next()
{
    if( idx_ < ct_->getSize() )
        ++idx_;
}

bool ConcreteIterator::isDone()
{
    return ( idx_ == ct_->getSize() );
}

Iterator::Object ConcreteIterator::currentItem()
{
    return ct_->getItem(idx_);      // 容器中的获取方法
}