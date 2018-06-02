/* 
 */

#pragma once

// 所有请求都有一个统一的接口
class Command
{
public:
    virtual ~Command() {}
    
    virtual void Excute() = 0;      // 由接收者实现 - 调动接收者
protected:
    Command() {}
private:
};