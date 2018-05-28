#include "composite.h"
#include <iostream>
#include <algorithm>        // find

using std::vector;
using std::cout;
using std::endl;

Composite::Composite() {
    
}

Composite::~Composite() {

}

void Composite::draw() {
    vector<Component*>::iterator it = comList.begin();
    for( ; it != comList.end(); ++it )
    {
        (*it)->draw();
    }
}

void Composite::add ( Component* com ) {
    if( !comList.empty() )
    {
        vector<Component*>::iterator pos;
        pos = std::find(comList.begin(), comList.end(), com);
        if( pos != comList.end() )
        {
//             cout << "已经有了" << endl;
            return ;
        }
    }
    comList.push_back(com);
}

void Composite::remove ( Component* com ) {
    vector<Component*>::iterator pos;
    pos = std::find(comList.begin(), comList.end(), com);
    comList.erase(pos);
    cout << comList.size() << endl;
}

Component* Composite::getChild ( int index ) {
    if( size_t(index) < comList.size() )
        return comList[index];
    else return NULL;
}
