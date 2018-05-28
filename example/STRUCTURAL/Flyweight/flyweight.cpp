#include "flyweight.h"

#include <iostream>
using std::cout;
using std::endl;
using std::string;

Flyweight::Flyweight ( string intrinsicState )
{
    this->intrinsicState_ = intrinsicState;
}

void Flyweight::operation ( const string& extrinsicState )
{
    cout << "Flyweight基类" << endl;
}

string Flyweight::getIntrinsicState()
{
    return this->intrinsicState_;
}
