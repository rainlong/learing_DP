/* 文法定义的语音的语法书
 */

#pragma once
#include "context.h"
#include <string>

using namespace std;
class Context;

// 缩写规则的抽象
class AbstractExpression
{
public:
    virtual ~AbstractExpression() {}
    
    virtual void Interpret( const Context& c ) = 0;     // 对上下文的处理
protected:
    AbstractExpression() {}
private:
};

// 对特定对象（statement）应用规则
class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression(const string& statement);
    ~TerminalExpression();
    
    virtual void Interpret( const Context& c );         // 根据上下文(Context)对对象进行处理
protected:
private:
    string statement_;
};

// 非终结符表达式 - 用来递归地表示中间的解释操作
class NonterminalExpression : public AbstractExpression
{
public:
    NonterminalExpression( AbstractExpression* expression, int times );
    virtual ~NonterminalExpression();
    
    virtual void Interpret( const Context& c );
protected:
    AbstractExpression* expression_;        // 递归地进行解释
    int times_;
};