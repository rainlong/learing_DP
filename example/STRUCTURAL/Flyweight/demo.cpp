// 由大量细粒度、重复的对象组成时(如： 文字编辑器中中的每个文字)， 其将对象内部状态和外部状态分离
// 常与工厂方法一同使用
// State模式和Strategy模式中会产生许多对象，可以通过FLyweight来处理重复的对象
// 细粒度的对象都具有较接近的外部状态， 而内部状态和环境无关
// 享元模式可以实现对象池 - 对象池着重于对象的重用， 池中每个对象都是可以替换的
// 享元模式侧重共享问题， 建立多个可共享的细粒度对象

#include <iostream>
#include "flyweight_factory.h"

int main( int /* argc */, char** /* argv */ )
{
    FlyweightFactory* fc = new FlyweightFactory();
    Flyweight* fw1 = fc->getFlyweight("黑棋");
    fw1->operation("3行4列");
    Flyweight* fw2 = fc->getFlyweight("白棋");
    fw2->operation("5行2列");
    Flyweight* fw3 = fc->getFlyweight("黑棋");
    fw3->operation("3行6列");
    return 0;
}