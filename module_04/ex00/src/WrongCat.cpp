/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:59:50 by vincent           #+#    #+#             */
/*   Updated: 2022/05/14 11:27:08 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***************** Canonical form **************/

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

/************* member functions ***************/

std::ostream	&operator<<(std::ostream &cout, WrongCat const &i)
{
	cout << i.getType();
	return (cout);
}

void WrongCat::makeSound(void) const
{
	std::cout << "\"I'm a Wrong cat: MEOW\"" << std::endl;
}