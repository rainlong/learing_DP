#include "concrete_flyweight.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

ConcreteFlyweight::ConcreteFlyweight ( string intrinsicState ) : Flyweight ( intrinsicState )
{
    
}

ConcreteFlyweight::~ConcreteFlyweight()
{

}

void ConcreteFlyweight::operation ( const string& extrinsicState )
{
    cout << "ConcreteFlyweight: 内含[" << this->getIntrinsicState()
         << "] 外含[" << extrinsicState << "]" << endl;
}
