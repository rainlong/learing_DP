#include "concrete_command.h"
#include "receiver.h"

void ConcreteCommand::Excute() {
    rev_->operation();
}
