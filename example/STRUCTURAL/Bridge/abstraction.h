/* 问题的抽象
 * - 对实现的抽象AbstractionImp有一个前向声明， 表示组合关系
 * - 对问题的抽象， 忽视了使用的方法，环境，平台， 这些都在后续的抽象特化时具体处理
 */
#pragma once

// 前向声明
class AbstractionImp;       // 在只出现 类的指针 时，可以使用前向声明 - 声明一个类而不定义它

// 问题的抽象， 抽象的抽象层
class Abstraction
{
public:
    virtual ~Abstraction() {}
    
    virtual void operation() = 0;
protected:
    
private:
};