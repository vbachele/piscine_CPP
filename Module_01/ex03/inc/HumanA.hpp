#ifndef HUMANA_H
# define HUMANA_H
#include "iostream"
#include "Weapon.hpp"

class HumanA {

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
private:
    std::string _name;
    Weapon      &_weapon; 
    // Here I create a reference to the class weapon which will be usefull when i will give a wepon to HumanA
};
#endif