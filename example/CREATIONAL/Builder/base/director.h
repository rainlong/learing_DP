/* 指导者， 用户直接与其交互
 * - 规定了建造者的执行顺序
 */

#pragma once

#include "builder.h"

class Computer; // 前向声明 - 本例中并没体现， 正确的应该在cpp中加入头文件

// 指导者固定构建的顺序
class Director
{
public:
    Computer construct( Builder* builder )      // 注意这里必须是指针， 因为纯虚类是不能实例化的！！！
    {
        builder->BuildCPU();
        builder->BuildMainboard();
        builder->BuildHD();
        builder->BuildMem();
        builder->BuildPower();
        builder->BuildOS();
        
        return builder->getComputer();
    }
    // 这里不声明Builder指针的原因是想让construct成为一种方法， 只表达了 指挥者可以指挥建造者
    // 如果还要表达 指挥者和建造者之间的关系时， 用 private: Builder* builder_; 使指挥者维护建造者指针
    // 利弊还可以参考 类适配器和对象适配器
};