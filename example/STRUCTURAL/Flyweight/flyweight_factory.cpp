#include "flyweight_factory.h"

#include <iostream>
#include "concrete_flyweight.h"
using std::vector;
using std::string;
using std::cout;
using std::endl;

FlyweightFactory::FlyweightFactory() {

}

FlyweightFactory::~FlyweightFactory() {

}

Flyweight* FlyweightFactory::getFlyweight ( const string& key )
{
    vector<Flyweight*>::iterator it = fly_.begin();
    for( ; it != fly_.end(); ++it )
    {
        if( (*it)->getIntrinsicState() == key )     // 此处用顺序遍历实现， 可以采用更高效的find(如Hash表等)
        {
            cout << "已经建立了"<< key <<"对象" << endl;
            return *it;
        }
    }
    Flyweight* newfly = new ConcreteFlyweight(key);
        
    fly_.push_back(newfly);
        
    return newfly;
}
