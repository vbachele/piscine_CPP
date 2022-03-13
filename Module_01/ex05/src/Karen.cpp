/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:02:51 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/13 23:04:24 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::debug()
{
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-specialketchup "
	"burger. I really do!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn’t put enough bacon in my burger! " 
	"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I’ve been coming for "
	"years whereas you started working here since last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable! I want to "
	"speak to the manager now." << std::endl;
}

// Here we create a pointer to function member *fct which point on our 4 functions. 
// If the input from the main is equal to on of the 4th str, we call the right function

void	Karen::complain(std::string level)
{
	Karen			karen;
	int				i = 0;
	std::string 	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Karen::*fct[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < 4)
	{
		if (level == str[i])
			(this->*fct[i])(); // On fait appel 0 la fonction de la class actuel
		i++;
	}
}