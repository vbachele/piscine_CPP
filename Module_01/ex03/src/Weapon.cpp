#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->_type = name;
    std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon Destructor called" << std::endl;
}

std::string const Weapon::getType(void)
{
    std::string const &name = this->_type;
    return (name);
}

void   Weapon::setType(std::string name)
{
    this->_type = name;
}