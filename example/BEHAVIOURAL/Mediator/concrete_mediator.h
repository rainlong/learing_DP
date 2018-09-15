/* 中介者是上层，也是中枢，他掌控全局，所有人都来找他
 */

#pragma once

#include "mediator.h"

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator() {}
    ConcreteMediator( Colleague* clgA, Colleague* clgB ) { IntroColleague(clgA, clgB);}
    virtual ~ConcreteMediator() {}
    
    
    // 中介者需要知道所有负责组件的名字和职责行为
    inline void setColleagueA( Colleague* clgA ) { clgA_ = clgA; }
    inline void setColleagueB( Colleague* clgB ) { clgB_ = clgB; }
    inline Colleague* getColleagueA() { return clgA_; }
    inline Colleague* getColleagueB() { return clgB_; }
    
    inline void IntroColleague( Colleague* clgA, Colleague* clgB )
    {
        clgA_ = clgA;
        clgB_ = clgB;
    }
    
    // 中介者负责安排对应组件做出响应
    virtual void notifyColleagueA(Colleague::State& sdt);
    virtual void notifyColleagueB(Colleague::State& sdt);
    
protected:
private:
    Colleague* clgA_;
    Colleague* clgB_;
};
