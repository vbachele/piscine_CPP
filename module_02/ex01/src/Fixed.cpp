/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:55 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/15 18:39:20 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor" << std::endl;
}

/***
 *	Will allow to copy a class thanks to the "operator=" with the class in param
 *	We return the reference
 	"*this" which means we return the members of the instance "obj".
	This is a rule in c++
***/

Fixed & Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}