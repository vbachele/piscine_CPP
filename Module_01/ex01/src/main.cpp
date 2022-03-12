/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:36 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 18:40:31 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *horde;
	/*********************  Creation of the ZombieHorde ***************/
	horde = zombieHorde(10, "Horde");
	/******************* Destruction of the ZombieHorde ******************/
	// If the object has multiple allocation delete + "[]"
	delete [] horde;
	/********************************************************************/
	return (0);
}