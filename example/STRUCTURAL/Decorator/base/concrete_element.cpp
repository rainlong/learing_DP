#include "concrete_element.h"
#include <iostream>

using namespace std;

ConcreteComponent::ConcreteComponent() {

}

ConcreteComponent::~ConcreteComponent() {
    cout << "释放 ConcreteComponent" << endl;
}

void ConcreteComponent::operation() {
    cout << "写了一本书" << endl;
}
