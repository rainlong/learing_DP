#include "concrete_mediator.h"
#include "colleague.h"

void ConcreteMediator::notifyColleagueA (Colleague::State& sdt) {
    clgA_->operation(sdt);
}

void ConcreteMediator::notifyColleagueB (Colleague::State& sdt) {
    clgB_->operation(sdt);
}
