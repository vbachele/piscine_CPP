/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:55 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/16 17:43:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = obj._value;
	return *this;
}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD					    //
// +------------------------------------------+ //

//Transform value into a fix point value

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
		this->_value = (value << Fixed::_bits);
}

// transform a float value sent into a fixed point value
// roundf - tranform to the nearest integral

Fixed::Fixed(const float value)
{
	std::cout << "float constructor called" << std::endl;
	this->_value = roundf(value * (1 << Fixed::_bits));
}

/***
 *	Will allow to copy a class thanks to the "operator=" with the class in param
 *	We return the reference
 	"*this" which means we return the members of the instance "obj".
	This is a rule in c++
***/

// +------------------------------------------+ //
//   OPERATOR OVERLOAD                          //
// +------------------------------------------+ //

/***
 * Here the operator << allow to take ostream &out which is the output
 to take the value of rawbits
 ***/

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}

// +------------------------------------------+ //
//   MEMBER FUNCTION                            //
// +------------------------------------------+ //

//transforme la valeur en float en fonction du fixed_point

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}