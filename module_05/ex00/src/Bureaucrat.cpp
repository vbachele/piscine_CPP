/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:15 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/29 15:46:25 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/************* canonical form ***************/

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
	std::cout << "copy Bureaucrat constructor called" << std::endl;
	*this = old_obj;
}

// Here i copy all the idea from the Bureaucrat of the previous obj

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->obj = obj;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

// +------------------------------------------+ //
//   				Member functions		 //
// +------------------------------------------+ //