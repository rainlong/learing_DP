/* 
 */

#pragma once

#include "mediator.h"

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator() {}
    ConcreteMediator( Colleague* clgA, Colleague* clgB ) { IntroColleague(clgA, clgB);}
    virtual ~ConcreteMediator() {}
    
    inline void setColleagueA( Colleague* clgA ) { clgA_ = clgA; }
    inline void setColleagueB( Colleague* clgB ) { clgB_ = clgB; }
    inline Colleague* getColleagueA() { return clgA_; }
    inline Colleague* getColleagueB() { return clgB_; }
    
    inline void IntroColleague( Colleague* clgA, Colleague* clgB )
    {
        clgA_ = clgA;
        clgB_ = clgB;
    }
    
    virtual void notifyColleagueA(Colleague::State& sdt);
    virtual void notifyColleagueB(Colleague::State& sdt);
    
protected:
private:
    Colleague* clgA_;
    Colleague* clgB_;
};