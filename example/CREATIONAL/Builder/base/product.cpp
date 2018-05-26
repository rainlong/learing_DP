#include "product.h"
#include <iostream>

Computer::Computer() : state(0x0)
{
}

void Computer::add( COMPONENT cp, std::string name )
{
    if( components.find(cp) != components.end() )
    {
        if( state & (1 << 5) ) {
            std::cout << "警告： 安装了系统，重新调整可能会引起不必要的错误。" << std::endl;
        }
        components[cp] = name;
        return ;
    }
    if( cp == OS && state != HARD_OK )
    {
        std::cout << "硬件平台没有准备好，不能安装系统" << std::endl;
        return ;
    }
    components.insert( std::pair<COMPONENT, std::string>(cp, name) );
    state |= 1 << cp;
}

void Computer::show()
{
    std::cout << "This PC: " << std::endl;
    std::map<COMPONENT, std::string>::iterator it = components.begin();
    std::map<COMPONENT, std::string>::iterator itend = components.end();
    for( ; it != itend; ++it )
    {
        std::cout << "  " << it->second << std::endl;
    }
}