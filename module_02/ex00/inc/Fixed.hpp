/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:42:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/15 17:37:06 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include "iostream"

class Fixed {

public:
	Fixed();
	Fixed(Fixed &old_obj);
	~Fixed();
	// return the value of the fixed point value
	int	getRawBits(void) const;
	 // set the raw value of the fixed point number
	void		setRawBits(int const raw);
private:
	int fixed_point;
	static const int bits;
};

#endif