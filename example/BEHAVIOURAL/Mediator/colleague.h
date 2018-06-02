/* 
 */

#pragma once

#include <string>

class Mediator;         // 前向声明

class Colleague         // 同事
{
public:
    typedef std::string State;      // 规定通讯的信息类型
    
    Colleague() {}
    virtual ~Colleague() {}
    
    inline void setMediator( Mediator *mdt ) // 一旦设为虚函数， 就不能在构造函数中调用
    { mdt_ = mdt; }
    inline Mediator* getMediator()
    { return mdt_; }
    
    virtual void notify() = 0;                      // 通过中介者发出请求 - 调用中介者的接口
    virtual void operation(const State& sdt) = 0;   // 做出响应
protected:
private:
    Mediator* mdt_;
};