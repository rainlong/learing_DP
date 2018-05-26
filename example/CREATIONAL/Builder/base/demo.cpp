/** Builder - 创建复杂对象， 一般很难用到， 库函数中不建议使用
 */
#include <iostream>
#include "director.h"
#include "product.h"

using namespace std;

int main( int /* argc */, char** /* argv */ )
{
    Computer client_1;
    Director* proprietor = new Director();
    Builder* builder_1 = new ConcreteBuilder_1();
    
    // 【用户】与【指挥者】交互， 【指挥者】差遣【构建者】
    // 【构建者】按【产品】的组件生产，按【指挥者】的命令组装
    client_1 = proprietor->construct(builder_1);
    
    client_1.show();
    
    return 0;
}
