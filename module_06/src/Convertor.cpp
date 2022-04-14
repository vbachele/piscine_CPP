/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:19:22 by vincent           #+#    #+#             */
/*   Updated: 2022/04/14 23:10:58 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

/***************** Canonical form **************/
Convertor::Convertor(std::string convertor) : _Convertor(convertor)
{
	bool	_intImpossible = false;
	bool	_charImpossible = false; 
	bool	_charNonPrintable = false;

	/***************** define the type of the variable **************/
	if (isInt(convertor) = false && isDouble(convertor) && isFloat(convertor) && isChar(convertor))
		this->_type == ERROR;

	getConvertor(convertor);
	setErrors();
	std::cout << "Constructor is called" << std::endl;
}
Convertor::Convertor(Convertor const &src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}
Convertor::~Convertor()
{
	std::cout << "Destructor is called" << std::endl;
}
Convertor &Convertor::operator=(Convertor const &obj)
{
	this->_intConvertor = obj._intConvertor;
	this->_floatConvertor = obj._floatConvertor;
	this->_doubleConvertor = obj._doubleConvertor;
	this->_charConvertor = obj._charConvertor;
	this->_type = obj._type;
	this->_intImpossible = obj._intImpossible;
	this->_charImpossible = obj._charImpossible;
	this->_charNonPrintable = obj._charNonPrintable;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/***************** member functions **************/


// This function takes a string as argument and will check if the string is only a int
bool		Convertor::isInt(std::string &str)
{
	char	*ptr = NULL;
	long	i = strtol(str, &endptr, 10);
	if (*ptr || i > INT_MAX || i < INT_MIN)
		return (false);
	this->_type = INT;
	this->_intConvertor = static_cast<int>(i);
    return true;
}

// This function takes a string as argument and will check if the string is only a double
bool		Convertor::isDouble(std::string &str)
{
	char* ptr = NULL;
	double d:
	
    d = strtod(str, &ptr);
	if (*ptr)
		return false;
	this->_type = DOUBLE;
	this->_doubleConvertor = d;
    return true;
}

// This function takes a string as argument and will check if the string is only a char
bool		Convertor::isChar(std::string &str)
{
	if (str.length != 1 && str.isChar == false)
		return false;
	this->_type = CHAR;
	this->_charConvertor = str;
	return false;			
}

// This function takes a string as argument and will check if the string is only a float
bool		Convertor::isFloat(std::string &str)
{
	char* ptr = NULL;
	float f:
	
    f = strtof(str, &ptr);
	if (*ptr != 'f' && (*ptr) + 1 != 0)
		return false;
	this->_type = FLOAT;
	this->_floatConvertor = f;
    return true;
}

// check the differents errors to set the flags for the display function
void		Convertor::setErrors(void)
{
	double	d = this->_double;

	if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
	{
		this->_charImpossible = true;
		this->_intImpossible = true;
	}
	else if (d < CHAR_MIN || d > CHAR_MAX)
		this->_charImpossible = true;
	else if (!std::isprint(this->_char))
		this->_charNonPrintable = true;
}

// Convert the string in the different type
void		Convertor::getConvertor()
{
	switch(t_type)
	{
		case CHAR:
			this->_intConvertor = static_cast << int << (_charConvertor);
			this->_floatConvertor = static_cast << float << (_charConvertor);
			this->_doubleConvertor = static_cast << double << (_charConvertor);
			break ;
		case INT:
			this->_charConvertor = static_cast << char << (_intConvertor);
			this->_floatConvertor = static_cast << float << (_intConvertor);
			this->_doubleConvertor = static_cast << double << (_intConvertor);
			break ;
		case FLOAT:
			this->_charConvertor = static_cast << char << (_floatConvertor);
			this->_intConvertor = static_cast << int << (_floatConvertor;
			this->_doubleConvertor = static_cast << double << (_floatConvertor);
			break ;
		case DOUBLE:
			this->_charConvertor = static_cast << char << (_doubleConvertor);
			this->_intConvertor = static_cast << int << (_doubleConvertor;
			this->_floatConvertor = static_cast << float << (_doubleConvertor);
			break ;
		default:
			this->_charImpossible = true;
			this->_intImpossible = true;
			this->_float = NAN;
			this->_double = NAN;
			break ;
		
	}
}

void		Convertor::displayConvertor()
{
	std::cout << std::fixed << std::setprecision(1); // will put the floating point to only 1 number after the "."

	std::cout << "char: ";
	if (this->_charImpossible)
		std::cout << "impossible" << std::endl;
	else if (this->_charNonPrintable)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << _char << std::endl;

	std::cout << "int: ";
	if (_intImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << _int << std::endl;

	std::cout << "float: " << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}
