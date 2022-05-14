/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:57:50 by vincent           #+#    #+#             */
/*   Updated: 2022/05/14 11:27:24 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
/***************** Canonical form **************/
	WrongCat(); 
	WrongCat(std::string const &name, unsigned int grade);
	WrongCat(WrongCat const &src);
	virtual ~WrongCat();
	WrongCat &operator=(WrongCat const &obj);
/***************** Member functions **************/
	void makeSound() const;
	protected:

};

std::ostream	&operator<<(std::ostream &o, WrongCat const &i);
#endif