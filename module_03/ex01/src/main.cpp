/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:35:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 17:55:54 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap antoine("Antoine");
	ScavTrap vincent("Vincent");
	std::cout << std::endl;
	antoine.attack("Le 1er gros mechant");
	antoine.takeDamage(20);
	antoine.beRepaired(20);
	std::cout << std::endl;
	vincent.takeDamage(20);
	vincent.beRepaired(20);
	vincent.attack("Le 2eme gros Mechant");
	std::cout << std::endl;
	vincent.guardGate();
}