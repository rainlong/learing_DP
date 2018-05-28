/* 
 */

#pragma once

#include "element.h"

#include <vector>

class Composite : public Component
{
public:
    Composite();
    ~Composite();
    
    virtual void draw();
    virtual void add( Component* com );        // 注意这里改变了参数的形式， 取消了const
    virtual void remove( Component* com );
    virtual Component* getChild( int index );
protected:
private:
    std::vector<Component*> comList;
};