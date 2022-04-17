/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:20:16 by vincent           #+#    #+#             */
/*   Updated: 2022/04/17 20:36:05 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP
#include "iostream"
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

class Convertor {
public:
/***************** Canonical form **************/
	Convertor(char const *Convertor);
	Convertor(Convertor const &src);
	~Convertor(void);
	Convertor &operator=(Convertor const &obj);
/***************** member functions **************/
	bool		isInt(char const *convertor);
	bool		isFloat(char const *convertor);
	bool		isDouble(char const *convertor);
	bool		isChar(char const *convertor);
	void		displayConvertor(void);
	void		getConvertor(void);
	void		setErrors(void);
private:
	int			_intConvertor;
	float		_floatConvertor;
	double		_doubleConvertor;
	char		_charConvertor;
	t_type	_type;
	bool	_intImpossible;
	bool	_charImpossible;
	bool	_charNonPrintable;
};

#endif