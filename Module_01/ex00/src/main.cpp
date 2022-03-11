/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:46:15 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 18:34:10 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	/*******
			Test to allocate a Newzombie by his name
			on the heap with a pointer
	********/
 	Zombie *zombie_h = newZombie("Heap");
	zombie_h->announce();
	delete zombie_h;
	//********************************************************

	//******* Here we create a new Zombie on the stack *********//
	Zombie zombie_s = Zombie("stack");
	zombie_s.announce();
	//********************************************************

	//******* Here we create a new RandomZombie *********//
	randomChump("random");
	//********************************************************
	return (0);
}