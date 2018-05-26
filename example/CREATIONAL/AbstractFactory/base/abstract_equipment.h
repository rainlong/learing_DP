#ifndef EQUIPMENT_H__
#define EQUIPMENT_H__

#include <iostream>
using std::cout;
using std::endl;

class AbstractEquipment
{
public:  
    virtual int equip()
    {
        cout << "装备武器" << endl;
        return 0;
    }
    inline int getDSP() { return dsp; }
protected:
    int dsp;
};

#endif
