/* 
 */

#pragma once

class Container;

// 设置抽象对象 - 一个token
class Iterator
{
public:
    typedef int Object;     // 容器对象的类型
    
    virtual ~Iterator() {}
    
    virtual void begin() = 0;           // 起始对象
    virtual void next() = 0;            // 指向转移
    virtual bool isDone() = 0;          // 判断结束
    virtual Object currentItem() = 0;   // 获取对象
protected:
    Iterator() {}
private:
};

// 具体实现
class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator( Container* ct, int idx = 0 );
    
    ~ConcreteIterator();
    
    void begin();
    void next();
    bool isDone();
    Object currentItem();
protected:
private:
    Container* ct_;
    int idx_;
};
    