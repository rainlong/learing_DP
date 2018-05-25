#ifndef SINGLETON_H__
#define SINGLETON_H__

#include <string>
#include <iostream>

class Loader
{
private:
    /// [核心]可以访问Loader类的全局指针 - 为防止多线程中重复实例化，直接在原文件中实例化
    static Loader* loader_;

protected:
    /// [核心]只有静态的指针loader_才可以实例化，由此构成单例(Singleton)
    Loader() {}
public:
    ~Loader() {}
    
    static void show()
    {
        std::cout << "Singleton" << std::endl;
    }
    
};  // [Loader]

// std::shared_ptr<Loader> Loader::loader_ = std::shared_ptr<Loader>(new Loader());
Loader* Loader::loader_ = new Loader();

#endif
