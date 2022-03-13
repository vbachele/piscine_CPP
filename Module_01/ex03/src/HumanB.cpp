#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = "None";
    std::cout << "Constructor HumanB called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor HumanB called" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}

void    HumanB::getWeapon(std::string weaponName)
{
    Weapon weapon = Weapon(weaponName);
    this->_weapon = weapon.getType();
}