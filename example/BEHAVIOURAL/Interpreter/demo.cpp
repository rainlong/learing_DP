/* 问题： 当一个特定类型的问题发生频率足够高， 将该问题的各个实例表述为句子(例如“美利坚...”说多了就是USA)，
 *      其中的文法规则(如缩写规则)即为解释器
 * 解释器模式 - 
 */

#include <iostream>
#include "interpreter.h"
#include "context.h"

/* 构建抽象语法树 - 由Nonterminal和Terminal的实例装配而成
 */
int main( int /* argc */, char** /* argv */ )
{
    Context* ct = new Context();
    
    AbstractExpression* abbreviation_rule = new TerminalExpression("美利坚合众国");
    AbstractExpression* USA = new NonterminalExpression( abbreviation_rule, 2 );
    
    USA->Interpret(*ct);        // 执行两次缩写规则
    
    return 0;
}