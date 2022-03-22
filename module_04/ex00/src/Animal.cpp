/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:11:55 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/22 18:01:03 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/************* canonical functions  ***************/

Animal::Animal()
{
	this->type = "default animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Animal &Animal::operator=(Animal const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void) obj;
	return *this;
}

/************* member functions ***************/	
std::string	Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound() const
{
		std::cout << "\"animal sound by default\"" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Animal const &animal)
{
	out << animal.getType();
	std::cout << "test" << std::endl;
	return out;
}

