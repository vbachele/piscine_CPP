/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:55 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/20 15:28:07 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed &old_obj)
{
	*this = old_obj;
}

Fixed::~Fixed(void)
{
}

/***
 *	Will allow to copy a class thanks to the "operator=" with the class in param
 *	We return the reference
 	"*this" which means we return the members of the instance "obj".
	This is a rule in c++
***/

Fixed &Fixed::operator=(Fixed const &obj)
{
	this->_value = obj._value;
	return *this;
}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD					    //
// +------------------------------------------+ //

//Transform value into a fix point value

Fixed::Fixed(const int value)
{
	this->_value = (value << Fixed::_bits);
}

// transform a float value sent into a fixed point value
// roundf - tranform to the nearest integral

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << Fixed::_bits));
}

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

/************* rhs means the right member of the tho sent in the function ***************/

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());	
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());	
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());	
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());	
}

// +------------------------------------------+ //
//   COMPARAISON FUNCTION                       //
// +------------------------------------------+ //

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());	
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());	
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());	
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());	
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());	
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());	
}

// +------------------------------------------+ //
//   INCREMENTATION FUNCTION                   //
// +------------------------------------------+ //

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);	
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);	
}

Fixed	Fixed::operator++(int) //++i
{
	Fixed tmp;
	
	tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int) //++i
{
	Fixed tmp;
	
	tmp = *this;
	this->_value--;
	return (tmp);
}

// +------------------------------------------+ //
//   PUBLIC OVERLOAD		                  //
// +------------------------------------------+ //

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())	
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())	
		return (a);
	return (b);
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
	this->_value = raw;
}