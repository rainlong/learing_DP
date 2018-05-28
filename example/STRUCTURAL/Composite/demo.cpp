/* 树状的组合结构 - 将对象组合成树形结构 以表示 “部分-整体” 的层级结构
 * 使得用户对单个对象和组合对象的使用有一致性
 * 
 * - 以图形为例
 */
#include <iostream>
#include "element_leaf.h"
#include "composite.h"

int main( int /* argc */, char** /* argv */ )
{
    Component* c1 = new Line();
//     c1->draw();
    Component* c2 = new Rectangle();
//     c2->draw();
    Component* c3 = new Rectangle();
//     c3->draw();
    Component* cc = new Composite();
    cc->add(c1);
    cc->add(c1);
    cc->add(c3);
    cc->draw();
    Component* c4 = cc->getChild(0);
//     c4->draw();
    cc->remove(c1);
//     cc->draw();
    return 0;
}