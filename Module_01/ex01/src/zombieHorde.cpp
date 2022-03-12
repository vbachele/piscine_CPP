/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:31 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 18:35:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N]; 
	int		i;
	
	i = -1;
	while (++i < N)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}