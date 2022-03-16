/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:42:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/16 17:35:32 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include "iostream"
#include "cmath"

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &old_obj);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(Fixed const &obj);
	friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
	float toFloat(void) const; // convert the fixed point in float
	int toInt(void) const;
	~Fixed();
	int	getRawBits(void) const;
	void		setRawBits(int const raw);
private:
	int 				_value;
	static const int 	_bits = 8;
};

#endif