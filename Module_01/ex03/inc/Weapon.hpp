/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:34:47 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 19:48:57 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include "string"
#include "iostream"

class Weapon {
public :
	Weapon();
	~Weapon();
	std::string getType();
	void setType(std::string type);
private :
	std::string _type;
};

#endif