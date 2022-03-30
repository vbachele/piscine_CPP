/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:41:35 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/30 18:23:21 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/***************** Canonical form **************/

static void	check_grade(unsigned int sign_grade, unsigned int exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}


Form::Form(std::string const &name, unsigned int required, unsigned int execute) :
						 _name(name),_signed(false), _required(required), _execute(execute)
{
	check_grade(this->_required, this->_execute);
	std::cout << "Constructor is called" << std::endl;
}

Form::Form(Form const &src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

Form::~Form()
{
	std::cout << "Destructor is called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Form const &display)
{
	out << "form Name " << display.getName();
	out << " is signed " << display.getIsSigned();
	out << " need the seal number minimum " << display.levelSignature();
	out << " executed by the number minimum " << display.levelExecution() << std::endl;
	return out;
}

Form &Form::operator=(Form const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	check_grade(obj._required, obj._execute);
	return *this;
}


/***************** Members functions **************/

std::string		Form::getName() const
{
	return (this->_name);
}

void			Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->_required)
	{
		throw Form::GradeTooLowException();
	}
	this->_signed = true;
}

unsigned int		Form::levelSignature() const
{
	return (this->_required);
}

unsigned int		Form::levelExecution() const
{
	return (this->_required);
}

bool		Form::getIsSigned() const
{
	return (this->_signed);
}

/***************** Exceptions functions **************/


char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}