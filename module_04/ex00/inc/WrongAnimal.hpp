/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:02:21 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/22 18:08:17 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include "Animal.hpp"

class WrongAnimal : public Animal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &old_obj);
	WrongAnimal &operator=(WrongAnimal const &obj);
	virtual ~WrongAnimal();
	/************* member functions ***************/
	virtual void	makeSound()const;
	std::string	getType() const;	
};



#endif