/* 每个状态分支
 * - 这里的状态转移 OperationChangeState中包含了该状态需要自动执行的部分
 */

#pragma once

#include "state.h"
#include <iostream>

using std::cout;
using std::endl;

// 状态A //////////////
class ConcreteStateA : public State
{
public:
    ConcreteStateA() { cout << "create A" << endl; }
    virtual ~ConcreteStateA() { cout << "delete A" << endl; }
    
    virtual void OperationInterface( Context* );    // 自动执行的内容
    virtual void OperationChangeState( Context* );
    
protected:
private:
};

// 状态B //////////////
class ConcreteStateB : public State
{
public:
    ConcreteStateB() { cout << "create B" << endl; }
    virtual ~ConcreteStateB() { cout << "delete B" << endl; }
    
    virtual void OperationInterface( Context* );    // 自动执行的内容
    virtual void OperationChangeState( Context* );
protected:
private:
};