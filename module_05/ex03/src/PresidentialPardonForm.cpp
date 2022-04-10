/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:30:59 by vincent           #+#    #+#             */
/*   Updated: 2022/04/10 20:55:50 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***************** Canonical form **************/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target , 25, 5), _target(target)
{
	std::cout << "Constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor is called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	Form::operator=(obj);
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute()
{
	std::cout << this->_target << " has been pardoned by Zaphod beeblebox" << std::endl;
}