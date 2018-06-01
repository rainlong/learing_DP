/* 
 */

#pragma once

#include <string>

using std::string;

class Memento;      // 前向声明

/* 备忘录发起人
 * - 1) 创建一个含有当前状态的备忘录对象
 * - 2) 使用备忘录对象存储当前状态
 */
class Originator
{
public:
    typedef string State;
    
    Originator();
    Originator( const State& sdt );
    
    virtual ~Originator();
    
    Memento* createMemento();               // [必需]创建备忘录
    void setMemento( Memento* mt );         // 存储当前状态
    void restoreMemento( Memento* mt );     // [必需]重置当前状态
    
    State getState();                       // [必需]提取当前状态
    void setState( const State& sdt );      // 设置当前状态
    void printState();                      // 显示当前状态
protected:
private:
    State sdt_;         // 当前状态
    Memento* mt_;       // 备忘录对象
};