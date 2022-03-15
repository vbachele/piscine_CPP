/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:42:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/15 18:39:31 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include "iostream"

class Fixed {

public:
	Fixed();
	Fixed(Fixed &old_obj);
	Fixed &operator=(Fixed const &obj);
	~Fixed();
	int	getRawBits(void) const;
	void		setRawBits(int const raw);
private:
	int _fixed_point;
	static const int _bits;
};

#endif