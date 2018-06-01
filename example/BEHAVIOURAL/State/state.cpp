#include "state.h"
#include <iostream>
#include "context.h"

using std::cout;
using std::endl;

bool State::ChageState ( Context* con, State* st )
{
    con->ChangeState(st);
    return true;
}
