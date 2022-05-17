/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:20:16 by vincent           #+#    #+#             */
/*   Updated: 2022/05/17 17:56:31 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERTOR_HPP__
# define __CONVERTOR_HPP__

# include <iostream>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <iomanip>

typedef enum e_type
{
	INT = 100,
	FLOAT,
	DOUBLE,
	CHAR,
	ERROR
}	t_type;

class Conversion
{
	public:
		Conversion(char const *s = "");
		Conversion(Conversion const &src);
		Conversion &operator=(Conversion const &rhs);
		~Conversion(void) {};
		bool	isChar(char const *input);
		bool	isInt(char const *input);
		bool	isFloat(char const *input);
		bool	isDouble(char const *input);
		void	display(void);
		void	setFlags(void);
		void	setValues(void);
	private:
		int		_int;
		float	_float;
		double	_double;
		char	_char;
		t_type	_type;
		bool	_intImpossible;
		bool	_charImpossible;
		bool	_charNonPrintable;
};

#endif