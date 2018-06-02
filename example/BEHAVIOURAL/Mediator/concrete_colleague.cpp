#include "concrete_colleague.h"
#include <iostream>
#include "mediator.h"

using namespace std;

////////////////
void ConcreteColleagueA::notify() {
    State sdt = "I need help form B";
    this->getMediator()->notifyColleagueB(sdt);
}

void ConcreteColleagueA::operation ( const Colleague::State& sdt ) {
    cout << "A: I had heard B's request : \"" << sdt << "\""<< endl;
}

///////////////
void ConcreteColleagueB::notify() {
    State sdt = "I need help form A";
    this->getMediator()->notifyColleagueA(sdt);
}

void ConcreteColleagueB::operation ( const Colleague::State& sdt ) {
    cout << "B: I had heard A's request : \"" << sdt << "\""<< endl;
}
