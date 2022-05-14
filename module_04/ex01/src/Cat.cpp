/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:11:57 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 12:10:05 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/************* canonical form ***************/

Cat::Cat()
{
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &old_obj)
{
	std::cout << "copy Cat constructor called" << std::endl;
	*this = old_obj;
}

Cat &Cat::operator=(Cat const &obj)
{
	std::cout << "Copy Cat assignment operator called" << std::endl;
	this->_brain = new Brain(*(obj._brain));
	return *this;
}

Cat::~Cat()
{
	if(this->_brain != NULL)
		delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

/************* member functions ***************/

void Cat::makeSound(void) const
{
	std::cout << "\"cat is meowing\"" << std::endl;
}

void	Cat::train(void) const
{
	this->_brain->putIdea();
	std::cout << "\e[0;31m*Meow Moew* (your cat is trained)\e[0m" << std::endl;
}

void	Cat::brainScan(void) const
{
	this->_brain->getIdea();
}
