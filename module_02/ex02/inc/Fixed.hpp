/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:42:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/16 18:22:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include "iostream"
#include "cmath"

class Fixed {

public:
	// +------------------------------------------+ //
	//   constructor canonical form                 //
	// +------------------------------------------+ //
	Fixed();
	Fixed(const Fixed &old_obj);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(Fixed const &obj);
	~Fixed();
	// +------------------------------------------+ //
	//   operators	                                //
	// +------------------------------------------+ //
	Fixed operator+(Fixed const & rhs) const;
	// Fixed &operator-(Fixed const &obj);
	// Fixed &operator*(Fixed const &obj);
	// Fixed &operator/(Fixed const &obj);
	// Fixed &operator<=(Fixed const &obj);
	// Fixed &operator<=(Fixed const &obj);
	// Fixed &operator>(Fixed const &obj);
	// Fixed &operator<(Fixed const &obj);
	// Fixed &operator!=(Fixed const &obj);
	// Fixed &operator==(Fixed const &obj);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
	// +------------------------------------------+ //
	//   member functions                           //
	// +------------------------------------------+ //
	float 	toFloat(void) const; // convert the fixed point in float
	int 	toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int 				_value;
	static const int 	_bits = 8;
};

#endif