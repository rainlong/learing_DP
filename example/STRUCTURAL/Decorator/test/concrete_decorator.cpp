#include "concrete_decorator.h"
#include <iostream>
using namespace std;

// ConcreteWrapperA ///////////
ConcreteWrapperA::ConcreteWrapperA ( Component* com ) : Wrapper(com)
{}

ConcreteWrapperA::~ConcreteWrapperA() {

}

void ConcreteWrapperA::operation() {
    this->update();
    Wrapper::operation();
}

void ConcreteWrapperA::update() {
    com_->update("找人写序");
}

// ConcreteWrapperB ///////////
ConcreteWrapperB::ConcreteWrapperB ( Component* com ) : Wrapper(com)
{}

ConcreteWrapperB::~ConcreteWrapperB() {

}

void ConcreteWrapperB::operation() {
    this->update();
    Wrapper::operation();
}

void ConcreteWrapperB::update() {
    com_->update("加上封面");
}
