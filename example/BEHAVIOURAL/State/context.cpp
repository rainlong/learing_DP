#include "context.h"
#include "state.h"

Context::Context () {}

Context::Context ( State* state ) : state_(state) {
}

Context::~Context() {
    if( !state_ ) delete state_;
}

void Context::OperationInterface() {
    state_->OperationInterface(this);
}

void Context::OperationChangeState() {
    state_->OperationChangeState(this);
}

// 强制转移到某一特定状态， 与内部状态转移逻辑无关
bool Context::ChangeState ( State* state ) {
//     state_->ChangeState( this, state );
    this->state_ = state;
    
    return true;
}
