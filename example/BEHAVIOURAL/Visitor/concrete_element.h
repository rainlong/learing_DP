/* 
 */

#pragma once

#include "element.h"

class ConcreteElementA : public Element
{
public:
    ConcreteElementA() {}
    virtual ~ConcreteElementA() {}
    
    virtual void accept( NodeVisitor* vis );
protected:
private:
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB() {}
    virtual ~ConcreteElementB() {}
    
    virtual void accept( NodeVisitor* vis );
protected:
private:
};