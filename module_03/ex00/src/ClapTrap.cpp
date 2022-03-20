/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:35:32 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/20 18:12:40 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/************* Canonical form ***************/

ClapTrap::ClapTrap() :  _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10),
							_energyPoints(10), _attackDamage(0)
{
	std::cout << "constructor with a name called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

/************* Member functions ***************/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "no_energy points left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
	<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints != 0 || this->_hitPoints != 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repairs " << amount << " points of life!" << std::endl;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " points of life!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "No energy Points left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int  amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		std::cout << "You are dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
	std::cout << "Only " << this->_hitPoints << " hit points left" << std::endl;
}