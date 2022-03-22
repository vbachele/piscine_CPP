/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:56:05 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/22 18:01:38 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include "iostream"

class Animal {
public:
/************* canonical form ***************/
	Animal();
	Animal(const Animal &old_obj);
	Animal &operator=(Animal const &obj);
	virtual ~Animal();
/************* member functions ***************/
	virtual void	makeSound()const;
	std::string	getType() const;
protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);


#endif