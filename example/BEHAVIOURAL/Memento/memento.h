/* 
 */

#pragma once
#include "originator.h" // 备忘录发起者中的State需要与客户需要的状态一致
#include <string>

using std::string;

class Originator;       // 前向声明

// 备忘录 ：　要保持完整的封装，　只将操作内部存储状态(属性)的接口给[外部】
class Memento
{
public:
    
    Memento() {}
    Memento( const Originator::State& sdt );
    ~Memento() {}
    
    void setState( const Originator::State& sdt );  // 设置状态
    Originator::State getState();                   // 获取状态
    
protected:
private:
    friend class Originator;            // [核心]让备忘录发起者可以访问备忘录的接口
    Originator::State sdt_;                         // 储存的状态， 内部是不可以修改的
};