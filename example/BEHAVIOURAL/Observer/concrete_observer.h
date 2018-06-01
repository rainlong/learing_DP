/* 
 */

#pragma once

#include "observer.h"


class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject* sub);
    virtual ~ConcreteObserverA();
    
    virtual void Update(Subject* sub);
protected:
private:
    Subject* sub_;
};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject* sub);
    virtual ~ConcreteObserverB();
    
    virtual void Update(Subject* sub);
protected:
private:
    Subject* sub_;
};