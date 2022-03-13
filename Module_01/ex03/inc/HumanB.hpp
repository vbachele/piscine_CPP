#ifndef HUMAN_B
#define HUMAN_B
#include "iostream"

class HumanB {

public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    getWeapon(std::string weaponName);
private:
    std::string _name;
    std::string _weapon;
};

#endif