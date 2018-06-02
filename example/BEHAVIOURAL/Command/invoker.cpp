#include "invoker.h"
#include "command.h"

void Invoker::Invoke() {
    cmd_->Excute();
}
