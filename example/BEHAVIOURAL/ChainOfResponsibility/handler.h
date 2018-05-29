/* 主要抽象出一种闭环的机制: 类中持有自己的对象
 */

#pragma once

#include <iostream>
using std::cout;
using std::endl;

// 对一条请求的响应
class Handler
{
public:
    virtual ~Handler() { delete succ_; }
    
    inline void setSuccessor( Handler* succ )
    { succ_ = succ; }
    
    inline Handler* getSuccessor()
    { return succ_; }
    
    virtual void handleRequest() = 0;
    
protected:
    Handler(Handler* succ = NULL) : succ_(succ) {}
private:
    Handler* succ_;     // 可能会响应的后继
};

//////////////////////////////////////////////////
class ConcreteHandlerA : public Handler
{
public:
    ConcreteHandlerA(Handler* succ = NULL) : Handler(succ) {}
    ~ConcreteHandlerA() {}
    
    void handleRequest()
    {
        if( this->getSuccessor() != NULL )
        {
            // 后面的做
            cout << "A: 后面的做" << endl;
            this->getSuccessor()->handleRequest();
        } else {
            // TODO: 我自己做
            cout << "A: 自己做" << endl;
        }
    }
};

class ConcreteHandlerB : public Handler
{
public:
    ConcreteHandlerB(Handler* succ = NULL) : Handler(succ) {}
    ~ConcreteHandlerB() {}
    
    void handleRequest()
    {
        if( this->getSuccessor() != NULL )
        {
            // 后面的做
            cout << "B: 后面的做" << endl;
            this->getSuccessor()->handleRequest();
        } else {
            // TODO: 我自己做
            cout << "B: 自己做" << endl;
        }
    }
};