// 这是细节操作， 相当于模板模式中的原语操作PrimitiveOperation

#pragma once

class Strategy
{
public:
    Strategy() {}
    virtual ~Strategy() {}
    
    virtual void Method() = 0;
protected:
private:
};