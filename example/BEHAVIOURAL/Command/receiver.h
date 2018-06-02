/* 
 */

#pragma once
#include <iostream>

// 【特定】消息的接收者与处理者
class Receiver
{
public:
    Receiver() {}
    ~Receiver() {}
    
    void operation()
    {
        std::cout << "我来解决问题" << std::endl;
    }
protected:
private:
};