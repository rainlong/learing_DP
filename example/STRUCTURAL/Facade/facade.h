// 与对象适配器的区别：
// - 对象适配器Adapter
// - - 继承自客户问题, 与客户的需求保持接口一致;
// - - 要指出要适配的【对象】， 使用者需要了解具体实现工具的情况。
// - 外观模式Facade
// - - 只对外提供解决问题的接口， 不受其他的限制；
// - - 对已经存在的库进行封装， 隐藏了具体实现与调用的细节。

#pragma once

#include <iostream>
#include "third_party_1.h"
#include "third_party_2.h"

using std::cout;
using std::endl;

class Facade
{
public:
    Facade()
    {
        sys1 = new systemA();
        sys2 = new systemB();
    }
    
    void operationWrapper()
    {
        cout << "调用设计好的外观接口" << endl;
        sys1->operation();
        sys2->operation();
    }
protected:
private:
    systemA* sys1;
    systemB* sys2;
};