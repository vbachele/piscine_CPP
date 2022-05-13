/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:35:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 17:57:56 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap antoine("Antoine");
	FragTrap robin("Robin");
	ScavTrap vincent("Vincent");
	std::cout << std::endl;

	antoine.attack("Le 1er gros MECHANT");
	antoine.takeDamage(20);
	antoine.beRepaired(20);
	std::cout << std::endl;

	vincent.attack("LE 2eme MECHANT");
	antoine.takeDamage(20);
	antoine.beRepaired(20);
	std::cout << std::endl;

	robin.attack("Le 3eme gros MECHANT");
	robin.takeDamage(20);
	robin.beRepaired(20);
	std::cout << std::endl;
	robin.highFivesGuys();
}