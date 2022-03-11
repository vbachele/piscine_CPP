/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:41:48 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 18:33:01 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include "string"
#include "iostream"

// Here we give the name to allocate the string in our constructor

class Zombie {

public :
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

private :
	std::string _name;
};

Zombie* newZombie(std::string name ); // pourquoi a l'exterieur de la class?
void randomChump(std::string name);

#endif