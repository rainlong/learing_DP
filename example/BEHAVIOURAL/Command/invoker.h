/* 
 */

#pragma once

class Command;

// 请求的发出者
class Invoker
{
public:
    Invoker(Command* cmd) : cmd_(cmd) {}
    ~Invoker() {}
    
    void Invoke();
protected:
private:
    Command* cmd_;
};