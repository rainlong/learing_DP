#include "memento.h"
// #include "originator.h"

Memento::Memento ( const Originator::State& sdt ) {
    sdt_ = sdt;
}

void Memento::setState ( const Originator::State& sdt ) {
    this->sdt_ = sdt;
}

Originator::State Memento::getState() {
    return sdt_;
}
