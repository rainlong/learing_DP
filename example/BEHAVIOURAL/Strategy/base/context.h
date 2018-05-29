/* 这是策略模式和模板模式的关键差别 - “组合/委托”的实现
 * 这里相当与模板模式的TemplateMethod
 */

#pragma once

#include "strategy.h"

class Context
{
public:
    Context(Strategy* stg) : stg_(stg) {}
    
    ~Context()
    {
        if( !stg_ ) delete stg_;
    }
    
    void DoAction()
    {
        stg_->Method();
    }
protected:
private:
    Strategy* stg_;
};