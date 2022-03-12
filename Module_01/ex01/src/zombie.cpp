/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:34 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 18:41:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
#include "zombie.hpp"

// Here we allocate the value by default before giving a name

Zombie::Zombie()
{
	this->_name = "Default";
	return ;
}

// Here we allocate the value of name in the constructor
// Zombie::Zombie(std::string name)
// {
// 	this->_name = name;
// 	std::cout << "constructor called" << std::endl;
// }

Zombie::~Zombie(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}