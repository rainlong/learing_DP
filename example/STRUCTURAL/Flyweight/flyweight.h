// 抽象享元对象， 定义了内部状态(intrinsicState_)和外部状态(extrinsicState)的接口
// 以围棋为例, 棋子的 黑白 为内部状态， 棋子在棋盘上的位置 为外部状态

// 享元模型与： 工厂模式、 状态模式、 策略模式、 对象池模式等有关

#pragma once

#include <string>

// 可以派生出 【可共享享元类】 和 【不可共享享元】类， 后者不受外部状态的影响
class Flyweight
{
public:
    virtual ~Flyweight() {}
    virtual void operation( const std::string& extrinsicState );    // 外部状态
    std::string getIntrinsicState();
protected:
    Flyweight( std::string intrinsicState );                        // 内部状态 - 只能由其具体实现类创建
private:
    std::string intrinsicState_;
};