/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:48:22 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 18:06:48 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/***
 * Here we create a new Zombie and we return the value
***/

Zombie* newZombie(std::string name)
{
	Zombie *zombie;
	
	zombie = new Zombie(name);
	return (zombie);
}