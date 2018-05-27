/* 对于以下情况：
 * 1. 客户的一个需求 -> 一个类
 * 2. 需求变化，有两个算法实现功能 -> 改为一个抽象基类， 两个具体类
 * 3. 要针对不同系统 -> 再抽象一个层次作为抽象基类 -> 具体类的个数倍乘
 * ......
 */ 

#include <iostream>
#include "refine_abstraction.h"             // 具体抽象类所在文件
#include "concrete_abstractionImp.h"        // 具体实现类所在头文件

int main( int /* argc */, char** /* argv */ )
{
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    Abstraction* abs = new RefineAbstraction(imp);      // 用组合的方式
    
    abs->operation();
    
    return 0;
}