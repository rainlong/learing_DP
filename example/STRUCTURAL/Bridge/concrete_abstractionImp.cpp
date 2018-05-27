#include "concrete_abstractionImp.h"
#include <iostream>

using std::cout;
using std::endl;

void ConcreteAbstractionImpA::operation() {
    cout << "实现A" << endl;
}

void ConcreteAbstractionImpB::operation() {
    cout << "实现B" << endl;
}
