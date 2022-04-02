/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:15 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/02 19:17:58 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// This function allows to check the condition of the mistake
static void	check_grade(unsigned int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/***************** Canonical form **************/

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name), _grade(grade)
{
	check_grade(this->_grade);
	std::cout << "Constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor is called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &display)
{
	out << display.getName() << ": " << display.getGrade();
	return out;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	check_grade(obj._grade);
	this->_grade = obj.getGrade();
	return *this;
}

/***************** Member functions **************/

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

void			Bureaucrat::IncrementGrade()
{
	this->_grade += 1;
}

void			Bureaucrat::DecrementGrade()
{
	check_grade(this->getGrade() - 1);
	this->_grade += -1;
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void			Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this); // j'envoie les infos de form dans beSigned
		std::cout << this->getName() << " signed the decret: " << form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << this->getName() << " couldn't sign the decret: ";
		std::cerr << form.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

// +------------------------------------------+ //
//   				exception                    //
// +------------------------------------------+ //

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}
