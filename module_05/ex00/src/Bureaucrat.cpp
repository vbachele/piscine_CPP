/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:15 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/24 13:20:06 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/***************** Canonical form **************/

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor is called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor is called" << std::endl;
}

/***************** Member functions **************/

void	Bureaucrat::getName()
{
	return (this->_name);
}

void	Bureaucrat::getGrade()
{
	return (this->_grade);
}
void	Bureaucrat::GradeTooHighException()
{
	std::cout << "You can't this grade is too high" << std::endl;
}

void	Bureaucrat::GradeTooLowException();
{
	std::cout << "You can't this grade is too low" << std::endl;	
}

void	