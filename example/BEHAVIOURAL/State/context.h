/* 有限状态自动机(FSM) - switch/case来实现 --> 1）状态数多时难以维护； 2)状态逻辑和动作实现没有分离
 * 
 * 
 */

#pragma once

class State;    // 前向声明

/* 有两点：
 * - 1) 定义用户感兴趣的接口
 * - 2) 维护当前状态
 */
class Context
{
public:
    Context();
    Context( State* state );
    ~Context();
    
    // 这里通常与状态中的接口一致， 实际上会调用当前状态的行为接口
    void OperationInterface();
    void OperationChangeState();
protected:
private:
    friend class State;     // Context可以访问State中私有成员
    bool ChangeState( State* state );   // 状态转移， 更新当前状态
    
    State* state_;
};