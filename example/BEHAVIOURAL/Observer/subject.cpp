#include "subject.h"
#include "observer.h"

// Subject::~Subject()
// { 
//     if( !obvs_->empty() )
//         obvs_->clear();
//     delete obvs_;
// }

// void Subject::attach ( Observer* obv )
// {
//     vector<Observer*>::iterator pos = std::find(obvs_->begin(), obvs_->end(), obv);
//     if( obvs_->end() == pos )
//         obvs_->push_back(obv);
// }

// void Subject::detach ( Observer* obv )
// {
//     vector<Observer*>::iterator pos = std::find(obvs_->begin(), obvs_->end(), obv);
//     if( obvs_->end() == pos )
//         return ;
//     obvs_->erase(pos);
// }

void Subject::notify()
{
    vector<Observer*>::iterator it = obvs_->begin();
    for( ; it != obvs_->end(); ++it )
    {
        (*it)->Update(this);
    }
}