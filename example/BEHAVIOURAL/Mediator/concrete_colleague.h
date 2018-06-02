/* 
 */

#pragma once

#include "colleague.h"

// 成员A ///////////////////
class ConcreteColleagueA : public Colleague
{
public:
    ConcreteColleagueA() {}
    ConcreteColleagueA( Mediator *mdt )
    { setMediator(mdt); }
    
        
    virtual ~ConcreteColleagueA() {}
    
    virtual void notify();
    virtual void operation(const State& sdt);
    
protected:
private:
};

// 成员B ///////////////////
class ConcreteColleagueB : public Colleague
{
public:
    ConcreteColleagueB() {}
    ConcreteColleagueB( Mediator *mdt )
    { setMediator(mdt); }
    
    virtual ~ConcreteColleagueB() {}
    
    virtual void notify();
    virtual void operation(const State& sdt);
    
protected:
private:
};