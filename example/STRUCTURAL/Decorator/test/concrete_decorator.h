#include "decorator.h"

class ConcreteWrapperA : public Wrapper
{
public:
    ConcreteWrapperA(Component* com);
    virtual ~ConcreteWrapperA();
    virtual void operation();
    
protected:
    virtual void update();
private:
};

class ConcreteWrapperB : public Wrapper
{
public:
    ConcreteWrapperB(Component* com);
    virtual ~ConcreteWrapperB();
    virtual void operation();
    
protected:
    virtual void update();
private:
};