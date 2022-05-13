/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:49:07 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 17:24:07 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	/************* canonical form ***************/
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &old_obj);
	FragTrap &operator=(FragTrap const &obj);
	~FragTrap();
	/************* member functions ***************/
	void 	highFivesGuys(void);
	void	attack(std::string const &target);

private:

};

#endif