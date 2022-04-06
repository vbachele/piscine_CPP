/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:05:00 by vincent           #+#    #+#             */
/*   Updated: 2022/04/05 18:46:03 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
/***************** Canonical form **************/

Intern::Intern()
{
	std::cout << "Constructor is called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

Intern::~Intern()
{
	std::cout << "Destructor is called" << std::endl;
}

Intern &Intern::operator=(Intern const &obj)
{
	(void) obj;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/***************** Here we create one of the form and we give the name target **************/

Form	*Intern::_Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

char const	*Intern::UnknownFormException::what(void) const throw()
{
	return ("Wrong form try again!");
}

Form	*Intern::MakeForm(std::string name, std::string target)
{
	int				i = 0;
	
	(void) target;
	// 
	std::string 	str[3] = {"robotomy request", "presidential request", "shruberry request"};
	Form			*(Intern::*fct[3])(std::string) = {&Intern::_Shrubbery, &Intern::_Robotomy, &Intern::_Presidential};
	while (i < 3)
	{
		try
		{
			if (name == str[i])
			{
				std::cout << "WORKS" << std::endl;
				return (this->*fct[i])(target); // on fait appel à la fonction associé et on return
			}
			else
				throw Intern::UnknownFormException();
			i++;
		}
		catch(std::exception & e)
		{
			std::cerr << "Couldn't create " << name << " because ";
			std::cerr << e.what() << std::endl;
			return (NULL);
		}
	}
	return (NULL);
}