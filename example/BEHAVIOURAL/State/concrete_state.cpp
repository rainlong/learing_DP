#include "concrete_state.h"
#include <iostream>
#include "context.h"        // 注意！！！ - 控制状态转移

using std::cout;
using std::endl;

// 状态A //////////////
void ConcreteStateA::OperationInterface ( Context* con ) {
    cout << "  状态A时该做的" << endl;
}

void ConcreteStateA::OperationChangeState ( Context* con ) {
    OperationInterface(con);
    this->ChageState( con, new ConcreteStateB() );      // 注意这里调用了State中的状态转移
}

// 状态B //////////////
void ConcreteStateB::OperationInterface ( Context* con ) {
    cout << "  状态B时该做的" << endl;
}

void ConcreteStateB::OperationChangeState ( Context* con ) {
    OperationInterface(con);
    this->ChageState( con, new ConcreteStateA() );      // 注意这里调用了State中的状态转移
}