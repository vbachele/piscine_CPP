/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:20:16 by vincent           #+#    #+#             */
/*   Updated: 2022/04/14 22:58:49 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_H
# define CONVERTOR_H
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
	Convertor(std::string Convertor);
	Convertor(Convertor const &src);
	~Convertor();
	Convertor &operator=(Convertor const &obj);
/***************** member functions **************/
	bool		isInt(std::string &convertor);
	bool		isFloat(std::string &convertor);
	bool		isDouble(std::string &convertor);
	void		displayConvertor();
	void		getConvertor(std::string &convertor);
	void		setErrors();
private:
	std::string _Convertor;
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