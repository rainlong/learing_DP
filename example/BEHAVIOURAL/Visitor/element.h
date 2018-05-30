/* 
 */

#pragma once

class NodeVisitor;  // 前向声明

class Element
{
public:
    virtual ~Element() {}
    
    virtual void accept( NodeVisitor* vis ) = 0;
protected:
    Element() {}
private:
};