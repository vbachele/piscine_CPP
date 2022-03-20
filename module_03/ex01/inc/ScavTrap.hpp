/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:02:36 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/20 17:42:33 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include "iostream"
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap // means ScavTrap inherit from ClapTrap
{
public:
	
	/************* canonical form ***************/
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &old_obj);
	//ScavTrap &operator=(ScavTrap const &obj);
	~ScavTrap();

	/************* member functions ***************/
	void guardGate();

private:

};

#endif