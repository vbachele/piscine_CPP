/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:02:21 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 11:22:26 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include "iostream"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &old_obj);
	WrongAnimal &operator=(WrongAnimal const &obj);
	virtual ~WrongAnimal();
	/************* member functions ***************/
	void	makeSound()const;
	std::string	getType() const;	
protected:
	std::string	_type;
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &i);

#endif