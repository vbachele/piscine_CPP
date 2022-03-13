#include "Weapon.hpp"

// By default create the weapon whitout a name
Weapon::Weapon(void)
{
    std::cout << "Weapon Constructor called" << std::endl;
    return ;
}

// Set a name to the weapon
Weapon::Weapon(std::string name)
{
    this->setType(name);
    std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon Destructor called" << std::endl;
}

// Get the const name of the weapon thanks to the reference
const std::string &Weapon::getType(void)
{
    return (this->_type);
}

// Give a new type to the weapon
void   Weapon::setType(std::string name)
{
    this->_type = name;
}
