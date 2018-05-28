#pragma once

#include <iostream>
#include "subject.h"            // 保持接口一致
#include "concrete_subject.h"   // 实际响应的方法

class Proxy : public Subject
{
public:
    // 构造函数 - 明确为谁代理
    Proxy() {cs_ = new ConcreteSubject();}
    Proxy( Subject* cs )
    {
        cs_ = cs;
    }
    
    virtual ~Proxy() {}
    
    virtual void request()
    {
        cs_->request();
        std::cout << "告诉代劳替我做" << std::endl;
    }
protected:
private:
    Subject* cs_;   // 为谁代劳
};