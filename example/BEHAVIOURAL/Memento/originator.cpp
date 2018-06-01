#include "originator.h"
#include <iostream>
#include "memento.h"

using namespace std;

Originator::Originator() : sdt_(""), mt_(0)
{}

Originator::Originator ( const Originator::State& sdt ) : mt_(0)
{
    sdt_ = sdt;
}

Originator::~Originator() {
    if( !mt_ ) delete mt_;
}

Memento* Originator::createMemento() {
    return new Memento( sdt_ );
}

void Originator::setMemento ( Memento* mt ) {
    mt->setState(sdt_);
}

void Originator::restoreMemento ( Memento* mt ) {
    this->sdt_ = mt->getState();
}

Originator::State Originator::getState() {
    return sdt_;
}

void Originator::setState ( const State& sdt ) {
    sdt_ = sdt;
}

void Originator::printState()
{   // 针对本例特化的显示接口
    cout << sdt_ << endl;
}
