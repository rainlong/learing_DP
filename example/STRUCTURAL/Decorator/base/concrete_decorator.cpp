#include "concrete_decorator.h"
#include <iostream>
using namespace std;

// ConcreteWrapperA ///////////
ConcreteWrapperA::ConcreteWrapperA ( Component* com ) : Wrapper(com)
{}

ConcreteWrapperA::~ConcreteWrapperA() {
    cout << "释放 ConcreteWrapperA" << endl;
}

void ConcreteWrapperA::operation() {
    Wrapper::operation();
    this->add();
}

void ConcreteWrapperA::add() {
    cout << "找人写序" << endl;
}

// ConcreteWrapperB ///////////
ConcreteWrapperB::ConcreteWrapperB ( Component* com ) : Wrapper(com)
{}

ConcreteWrapperB::~ConcreteWrapperB() {
    cout << "释放 ConcreteWrapperB" << endl;
}

void ConcreteWrapperB::operation() {
    Wrapper::operation();
    this->add();
}

void ConcreteWrapperB::add() {
    cout << "加上封面" << endl;
}
