// 叶子节点只需要实现operation()， 即draw()

#ifndef ELEMENT_LEAF_H__
#define ELEMENT_LEAF_H__

#include "element.h"

class Line : public Component
{
public:
    Line() {}
    ~Line() {}
    
    virtual void draw();
protected:
private:
};

class Rectangle : public Component
{
public:
    Rectangle() {}
    ~Rectangle() {}
    
    virtual void draw();
protected:
private:
};

class Text : public Component
{
public:
    Text() {}
    ~Text() {}
    
    virtual void draw();
protected:
private:
};

#endif