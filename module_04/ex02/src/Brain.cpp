/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:45:19 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 12:04:37 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Define.hpp"

/************* canonical form ***************/

Brain::Brain()
{
	std::cout << BRAIN " " << CONSTRUCTOR << " called" << std::endl;
}

Brain::Brain(const Brain &old_obj)
{
	std::cout << "copy" << BRAIN " " << CONSTRUCTOR <<  "called" << std::endl;
	*this = old_obj;
}

// Here i copy all the idea from the brain of the previous obj

Brain &Brain::operator=(Brain const &obj)
{
	std::cout << "copy" << BRAIN << "assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << BRAIN " " << DESTRUCTOR << " called" << std::endl;
}

/************* member functions ***************/

	void	Brain::putIdea() // Here i STOCK THE IDEA
	{
		_ideas[0] = "Fetch a bone";
		_ideas[1] = "Hug my master";
		_ideas[2] = "Eat everytime I could";
	}

	void	Brain::getIdea() // Here I display the idea
	{
		std::cout << "\e[1;37m////////Brain Scan\\\\\\\\\\\\\\\\\\\e[0m" << std::endl;
		std::cout << _ideas[0] << std::endl;
		std::cout << _ideas[1] << std::endl;
		std::cout << _ideas[2] << std::endl << std::endl;;
	}
