/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:55:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 18:00:19 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/************* Canonical Form ***************/

FragTrap::FragTrap()
{
	std::cout << "Default constructor Scavtrap called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "constructor FragTrap called" << std::endl;
	std::cout << "default hit points : " << this->_hitPoints << std::endl;
	std::cout << "default attack damage : " << this->_attackDamage << std::endl;
	std::cout << "default energy points : " << this->_energyPoints << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

FragTrap::FragTrap(const FragTrap &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor FragTrap called" << std::endl;
}

/************* Members functions ***************/

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVE MATES" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "[\033[33mFRAG\033[0m] ";
		std::cout << this->_name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << this->_name << " EXPLODES and deals " << this->_attackDamage << " damage to "
			<< target << "." << std::endl;
	this->_energyPoints--;
}