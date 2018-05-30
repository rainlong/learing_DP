#include "concrete_visitor.h"
#include <iostream>
#include "concrete_element.h"

using namespace std;

void ConcreteVisitor_1::visitConcreteElementA ( Element* a ) {
    cout << "1: I will visit Element_A." << endl;
}

void ConcreteVisitor_1::visitConcreteElementB ( Element* b ) {
    cout << "1: I will visit Element_B." << endl;
}


void ConcreteVisitor_2::visitConcreteElementA ( Element* a ) {
    cout << "2: I will visit Element_A." << endl;
}

void ConcreteVisitor_2::visitConcreteElementB ( Element* b ) {
    cout << "2: I will visit Element_B." << endl;
    
}
