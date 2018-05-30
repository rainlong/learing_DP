#include "concrete_element.h"
#include <iostream>
#include "visitor.h"            // 注意这里只要知道访问者的接口

void ConcreteElementA::accept ( NodeVisitor* vis ) {
    vis->visitConcreteElementA(this);
    std::cout << "正在对ElementA进行操作" << std::endl;
}

void ConcreteElementB::accept ( NodeVisitor* vis ) {
    vis->visitConcreteElementB(this);
    std::cout << "正在对ElementB进行操作" << std::endl;
}