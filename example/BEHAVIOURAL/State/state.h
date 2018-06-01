/* 
 */

#pragma once

class Context;  // 前置声明

// 定义一个接口以封装与Context中一个特定状态相关的行为
class State
{
public:
    State() {}
    virtual ~State() {}
    
    // 这里的Context* 是为了：
    // - 1)获取当前状态下的成员变量；
    // - 2)更新Context中的成员变量(例如系统状态(enum)、当前状态(state_))
    virtual void OperationInterface( Context* ) = 0;    // 动作实现
    virtual void OperationChangeState( Context* ) = 0;  // 状态转移逻辑
protected:
    // 这里状态转移的逻辑由其子类的 OperationChangeState 具体实现
    bool ChageState( Context* con, State* st );         // 状态转移, 让con转移到下一个状态st
    
private:
//     bool ChageState( Context* con, State* st );         // 状态转移
};