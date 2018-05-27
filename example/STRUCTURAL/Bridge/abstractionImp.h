/* 实现的抽象
 * - 对应于问题的抽象， 只有一个前向声明在abstraction中 - 表明组合的关系
 */
#ifndef ABSTRACTIONIMP_H__
#define ABSTRACTIONIMP_H__

// 实现的抽象
class AbstractionImp
{
public:
    virtual ~AbstractionImp() {}
    
    virtual void operation() = 0;
protected:
    AbstractionImp() {}
private:

};

#endif