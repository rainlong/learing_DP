/* 
 */

#pragma once

#include "element.h"

class Wrapper : public Component
{
public:
    Wrapper(Component* com)
    {
        this->com_ = com;
    }
    ~Wrapper()
    {
        delete com_;
    }
    
    virtual void operation()
    {
        com_->operation();
    }
protected:
    virtual void update() {}
    
    Component* com_;
private:
};