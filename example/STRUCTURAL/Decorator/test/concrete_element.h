/* 
 */

#pragma once

#include <list>
#include <string>
#include "element.h"

using std::list;
using std::string;

class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    ~ConcreteComponent();
    virtual void operation();
    
protected:
    virtual void update();
    
    list<string> mList;
private:
};