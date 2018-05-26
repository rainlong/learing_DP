/** 原型
 */
#include <iostream>
#include "prototype.h"

int main( int /* argc */, char** /* argv */ )
{
    AntPrototype* p = new Ant();
//     cout << "P " << p << endl;
    AntPrototype* p1 = p->clone();
//     cout << "P1 " << p1 << endl;
    return 0;
}
