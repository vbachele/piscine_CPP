/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:35:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/20 16:22:33 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap("vincent");
	ClapTrap.attack("mechant");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(2);
}