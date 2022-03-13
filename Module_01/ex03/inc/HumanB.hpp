#ifndef HUMAN_B
#define HUMAN_B
#include "iostream"
#include "Weapon.hpp"

class HumanB {

public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    getWeapon(Weapon &weapon);
private:
    std::string _name;
    Weapon      *_weapon; // pourquoi c'est mieux d'utiliser un pointeur ici ?
};

#endif