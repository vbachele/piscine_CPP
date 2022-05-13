/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:35:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 17:48:07 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap("Antoine");
	ClapTrap.attack("mechant");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(2);
}