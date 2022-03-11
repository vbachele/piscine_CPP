/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:56 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 18:33:47 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// I create a Zombie in the stack and I announce it directly

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}