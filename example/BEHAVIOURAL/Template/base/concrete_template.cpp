#include "concrete_template.h"
#include <iostream>

using std::cout;
using std::endl;

void ConcreteMethod1::PrimitiveOperation1() {
    cout << "按出国证件照拍摄" << endl;
}

void ConcreteMethod1::PrimitiveOperation2() {
    cout << "适量P图" << endl;
}

void ConcreteMethod2::PrimitiveOperation1() {
    cout << "按一般证件照拍摄" << endl;
}

void ConcreteMethod2::PrimitiveOperation2() {
    cout << "魔P" << endl;
}
