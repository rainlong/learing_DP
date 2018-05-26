#ifndef PRODUCT_H__
#define PRODUCT_H__

/** @brief 怪物模型 - 基类
 */
class Monster {
public:
    virtual void show();
protected:
    int hp, atk, def, spd;
    int STR, INT, CON, LCK;
};

// 派生1
class Eldar : public Monster
{
public:
    Eldar();
    virtual void show();
};

// 派生2
class Orc : public Monster
{
public:
    Orc();
    virtual void show();
};

#endif