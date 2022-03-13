#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB()
{
     std::cout << "Constructor HumanB called without weapon" << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << "Constructor HumanB called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor HumanB called" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

// Here we send the weapon to HumanB to setup his weapon.
void    HumanB::getWeapon(Weapon &weapon)
{
    this->_weapon = &weapon; // get all the attribute of the *weapon;
}
