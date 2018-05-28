/* 基类 - 组合模式的关键
 * - 既可以代表图元， 又可以代表图元的容器, 又被称为Component
 * - 从问题中抽象出每个元素的公共接口， 以及对容器的移入移除操作
 */

#pragma once

class Component
{
public:
    virtual ~Component() {}
    
    virtual void draw() = 0;                        // 一般模式下的： Operation()， 该对象的功能
    virtual void add( Component* ) {}               // 向容器中添加元素 - 没法用const， 虽然我知道不能修改， 但元素容器如果没设为const就会很麻烦
    virtual void remove( Component* ) {}            // 从容器中移除元素
    virtual Component* getChild( int ) { return 0; }// 获得容器中指定位置的元素
protected:
    Component() {}
private:
};
