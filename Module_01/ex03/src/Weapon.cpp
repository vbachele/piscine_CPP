/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:37:30 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 19:48:44 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string getType(void)
{
	std::string type;
	type = this->_type;
	return (type);
}

void setType(std::string type)
{
	std::string type;
	type = this->_type;
} 
