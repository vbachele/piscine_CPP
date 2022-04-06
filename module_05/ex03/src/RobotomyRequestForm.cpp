/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:24:59 by vincent           #+#    #+#             */
/*   Updated: 2022/04/03 22:25:23 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

/***************** Canonical form **************/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor is called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	Form::operator=(obj);
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/***************** member functions **************/

char const	*RobotomyRequestForm::FailedToRobotomizeException::what(void) const throw()
{
	return ("failed to robotomize");
}

void	RobotomyRequestForm::execute(void) const
{
	std::srand(time(NULL));
	std::cout << "*drill noises*" << std::endl;
	if ((std::rand() % 2) == 0)
		throw RobotomyRequestForm::FailedToRobotomizeException(); // corriger le problème de l'exeception qui bug
	std::cout << this->_target << " was robotomized" << std::endl; 
}