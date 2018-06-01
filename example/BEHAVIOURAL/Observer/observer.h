/* 观察者/订阅者 - 
 */

#pragma once

#include <string>
class Subject;

typedef std::string State;
class Observer
{
public:
    virtual ~Observer() {}
    
    virtual void Update(Subject* sub) = 0;
    
protected:
    Observer() {}
    
    State st_;
private:
};