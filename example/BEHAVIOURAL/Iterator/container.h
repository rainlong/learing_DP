/* 
 */

#pragma once

#include <cstddef>

using std::size_t;

class Iterator;

// 容器 - 获取其中元素、 给出容器大小, 这里省略了向容器添加元素、移除元素的方法，
//       容器中的元素数量用固定值表示
class Container
{
public:
    typedef int Object;
    
    virtual ~Container() {}
    
    virtual Iterator* createIterator() = 0;
    virtual Object getItem( int idx ) = 0;
    virtual int getSize() = 0;
protected:
    Container() {}
private:
};

class ConcreteContainer : public Container
{
public:
    enum { SIZE = 100 };        // 枚举的特殊用途 - 代替const
    ConcreteContainer() : ct_size(SIZE) {}
    ~ConcreteContainer() {}
    
    Iterator* createIterator();
    Object getItem(int idx);
    int getSize();
protected:
private:
    size_t ct_size;
    Object objs_[SIZE];
};