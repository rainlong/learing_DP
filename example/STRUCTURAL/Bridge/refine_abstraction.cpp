#include "refine_abstraction.h"
#include "abstractionImp.h"

// 用组合的方式
RefineAbstraction::RefineAbstraction ( AbstractionImp* imp )
{
    this->imp_ = imp;
}

// 调用具体实现类中的方法解决问题
void RefineAbstraction::operation()
{
    imp_->operation();
}
