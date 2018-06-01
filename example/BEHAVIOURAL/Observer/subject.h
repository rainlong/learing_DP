/* 主题 - 
 */

#pragma once

#include <vector>
#include <string>
#include <algorithm>

using std::vector;

typedef std::string State;

class Observer;     // 前向声明

class Subject
{
public:
    virtual ~Subject()
    {
        if( !obvs_->empty() )
            obvs_->clear();
        delete obvs_;
    }
    
    virtual void attach( Observer* obv )        // 订阅
    {
        vector<Observer*>::iterator pos = std::find(obvs_->begin(), obvs_->end(), obv);
        if( obvs_->end() == pos )
            obvs_->push_back(obv);
    }
    
    virtual void detach( Observer* obv )        // 取消订阅
    {
        vector<Observer*>::iterator pos = std::find(obvs_->begin(), obvs_->end(), obv);
        if( obvs_->end() == pos )
            return ;
        obvs_->erase(pos);
    }
    
    virtual void notify();                      // 通知 - 这里调用了Observer中的方法
    
    // 需要通知的信息
    virtual void setState( const State& st ) = 0;
    virtual State getState() = 0;
protected:
    Subject() { obvs_ = new vector<Observer*>; }
    
private:
    vector<Observer*> *obvs_;
};