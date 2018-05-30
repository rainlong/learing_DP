/* 
 */

#pragma once

#include "visitor.h"

class ConcreteVisitor_1 : public NodeVisitor
{
public:
    ConcreteVisitor_1() {}
    virtual ~ConcreteVisitor_1() {}
    
    virtual void visitConcreteElementA(Element* a);
    virtual void visitConcreteElementB(Element* b);
protected:
private:
};


class ConcreteVisitor_2 : public NodeVisitor
{
public:
    ConcreteVisitor_2() {}
    virtual ~ConcreteVisitor_2() {}
    
    virtual void visitConcreteElementA(Element* a);
    virtual void visitConcreteElementB(Element* b);
protected:
private:
};