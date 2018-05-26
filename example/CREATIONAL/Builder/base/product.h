/* 产品模型
 * - 各个部件
 */

#pragma once

#include <map>
#include <string>

enum COMPONENT
{
    CPU = 0,
    MAINBOARD = 1,
    MEM = 2,
    HD = 3,
    POWER = 4,
    OS = 5
};

const char HARD_OK = 0x1F;

class Computer
{
public:
    Computer();
    void add( COMPONENT cp, std::string name );
    void show();
private:
    std::map<COMPONENT, std::string> components;
    char state;
};