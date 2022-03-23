/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:11:59 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/23 15:18:03 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

/************* canonical form ***************/

// I create the class Brain here thanks to the _brain attribute I created in hpp
Dog::Dog()
{
	this->_brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}

Dog &Dog::operator=(Dog const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_brain = new Brain(*(obj._brain)); // POURQUOI ??
	return *this;
}

// I can delete the brain here
Dog::~Dog()
{
	if(this->_brain != NULL)
		delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

/************* functions members ***************/
void Dog::makeSound(void) const
{
	std::cout << "\"Dog is barking\"" << std::endl;
}

void Dog::train(void) const
{
	this->_brain->putIdea();
	std::cout << "\e[0;31m*Wouf Wouf* (your dog is trained)\e[0m" << std::endl;
}

void	Dog::brainScan() const
{
	this->_brain->getIdea();
}
