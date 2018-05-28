/* 保证包装器和被包装对象有一致的接口
 */

#pragma once

// 统一接口， 代表了统一的对象， 例如为手机贴膜、装壳， 那么这个就是Phone
// 如本例是出版一本书， 定稿、 写序、 装封皮， 这个类就是Book
class Component
{
public:
    virtual ~Component() {}         // 析构函数千万不能设为纯虚， 如果一定要设，要在cpp文件中实现，在h文件实现会报多次定义
    virtual void operation() = 0;
protected:
    Component() {}
private:
};