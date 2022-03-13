#include "HumanA.hpp"

// Here i have to allocate the Weapon directly in the constructor for Human. 
// Change for the syntax, I declare in the prototype and i give the value to my name and my weapon
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "Constructor HumanA called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor HumanA called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}