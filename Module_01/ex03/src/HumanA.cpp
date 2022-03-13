#include "HumanA.hpp"
#include "Weapon.hpp"

// Here i have to allocate the Weapon directly in the constructor for Human A
HumanA::HumanA(std::string name, std::string weapon)
{
    Weapon weapon_obj = Weapon(weapon);
    this->_weapon = weapon;
    this->_name = name;
    std::cout << "Constructor HumanA called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor HumanA called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}