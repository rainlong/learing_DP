#include "concrete_strategy.h"
#include <iostream>

using std::endl;
using std::cout;

void ConcreteStrategy1::Method() {
    cout << "原语操作 1" << endl;
}


void ConcreteStrategy2::Method() {
    cout << "原语操作 2" << endl;
}
