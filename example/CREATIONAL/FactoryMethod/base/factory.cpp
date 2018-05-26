#include "factory.h"
#include "productList.h"

Factory::~Factory() {}      // 必须提供纯虚析构函数的定义

void EldarFactory::create() {
    t = new Eldar();
    t->show();
}

void OrcFactory::create() {
    t = new Orc();
    t->show();
}
