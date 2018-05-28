/* 
 */

#pragma once

#include "element.h"

class ConcreteComponent : public Component
{
public:
    ConcreteComponent();
    ~ConcreteComponent();
    virtual void operation();
protected:
private:
};