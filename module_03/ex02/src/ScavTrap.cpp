/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:18:45 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 18:00:13 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/************* Canonical form ***************/

ScavTrap::ScavTrap()
{
	std::cout << "Scavtrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap is called" << std::endl;
	std::cout << "default hit points : " << this->_hitPoints << std::endl;
	std::cout << "default attack damage : " << this->_attackDamage << std::endl;
	std::cout << "default energy points : " << this->_energyPoints << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScavTrap called" << std::endl;
}

/************* Member functions ***************/

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "[\033[33mSCAV\033[0m] ";
		std::cout << this->_name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[33mSCAV\033[0m] ";
	std::cout << this->_name << " BURNS and deals " << this->_attackDamage << " damage to "
			<< target << "." << std::endl;
	this->_energyPoints--;
}