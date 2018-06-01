/* 在不破坏封装的前提下， 捕获并保存一个类的内部状态， 这样就可以利用该保存的状态实施恢复操作
 * 
 * 这是最基本的备忘录应用， 再深入需要备忘录管理者(Caretaker)参与, 管理多个token， 并希望能对多个token进行管理
 */

#include <iostream>
#include "memento.h"        // 其中包含了备忘录发起者

int main( int /* argc */, char** /* argv */ )
{
    Originator* newState = new Originator("初始状态");
    Memento* token = new Memento();
    token = newState->createMemento();
    newState->printState();
    
    // TODO: 状态转移
    newState = new Originator("状态转移");
    newState->printState();
    newState->restoreMemento(token);
    newState->printState();
    return 0;
}