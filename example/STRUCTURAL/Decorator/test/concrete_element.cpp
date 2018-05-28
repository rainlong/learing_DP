#include "concrete_element.h"
#include <iostream>

using namespace std;

ConcreteComponent::ConcreteComponent() {
    mList.push_back("写了一本书");
}

ConcreteComponent::~ConcreteComponent() {

}

void ConcreteComponent::operation() {
    list<string>::iterator it = mList.begin();
    
    for( ; it != mList.end(); ++it )
        cout << *it << endl;
}

void ConcreteComponent::update(string str) {
    mList.push_back(str);
}