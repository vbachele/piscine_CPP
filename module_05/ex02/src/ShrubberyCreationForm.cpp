/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:37:24 by vincent           #+#    #+#             */
/*   Updated: 2022/04/02 19:56:27 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/***************** Canonical form **************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Aform("Shruberry", 145, 137), _target(target) // prend un nom et 2 valeurs valeurs
{
	std::cout << "Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Aform(src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	Aform::operator=(obj); // Aform doit etre un modèle de formulaire sur lesquels on va créer 3 formulaires derrière
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/***************** member functions **************/

void		ShrubberyCreationForm::excecute() const;
{
	
}

char const	*ShrubberyCreationForm::FailedToOpenFileException::what(void) const throw()
{
	std::cout << "couldn't open this file" << std::endl;
}
