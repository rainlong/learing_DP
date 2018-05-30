/* 
 */

#pragma once

class Element;      // 前向声明

class NodeVisitor
{
public:
    virtual ~NodeVisitor() {}
    
    virtual void visitConcreteElementA( Element* ) = 0;     // 对某个特定对象实施的操作
    virtual void visitConcreteElementB( Element* ) = 0;
protected:
    NodeVisitor() {}
private:
};