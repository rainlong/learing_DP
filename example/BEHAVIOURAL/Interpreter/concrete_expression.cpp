#include "interpreter.h"
#include <iostream>

using namespace std;

////////////////////
TerminalExpression::TerminalExpression(const string& statement)
{
    statement_ = statement;
}

TerminalExpression::~TerminalExpression()
{
}

// 要注意会递归调用此方法， 要对终端实现进行足够细致的抽象与实现， 里对多个单词取首字母大写， 这里只对一个单词进行操作，
// 多单词的划分任务通过 递归调用 来实现
void TerminalExpression::Interpret( const Context& c )
{
    // 从Context获取一些辅助信息
    // 对statement_进行一些处理
    cout << this->statement_ << " TerminalExpression " << endl;
}

////////////////////
NonterminalExpression::NonterminalExpression( AbstractExpression* expression, int times )
{
    expression_ = expression;
    times_ = times;
}

NonterminalExpression::~NonterminalExpression()
{
}

void NonterminalExpression::Interpret( const Context& c )
{
    for( int i = 0; i < times_; ++i )
        this->expression_->Interpret(c);
}