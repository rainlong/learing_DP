#include "concrete_observer.h"
#include <iostream>
#include "subject.h"

using namespace std;

ConcreteObserverA::ConcreteObserverA ( Subject* sub ) : sub_(sub)
{
    sub_->attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
    sub_->detach(this);
}

void ConcreteObserverA::Update ( Subject* sub )
{
    st_ = sub_->getState();
    
    // TODO: 根据主题响应
    cout << st_ << endl;
}

ConcreteObserverB::ConcreteObserverB ( Subject* sub ) : sub_(sub)
{
    sub_->attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
    sub_->detach(this);
}

void ConcreteObserverB::Update ( Subject* sub )
{
    st_ = sub_->getState();
    
    // TODO: 根据主题响应
    cout << st_ << endl;
}