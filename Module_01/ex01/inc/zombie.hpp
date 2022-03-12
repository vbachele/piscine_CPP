/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 18:41:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "string"
#include "iostream"

// Here we give the name to allocate the string in our constructor

class Zombie {

public :
	Zombie();
	//Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);

private :
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name ); // pourquoi a l'exterieur de la class?

#endif