/* 
 */

#pragma once

#include "subject.h"

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject() : st_("\0") {}
    virtual ~ConcreteSubject() {}
    
    virtual State getState()
    {
        return st_;
    }
    virtual void setState( const State& st )
    {
        st_ = st;
    }
protected:
private:
    State st_;
};