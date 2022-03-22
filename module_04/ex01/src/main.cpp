/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:53:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/22 18:12:13 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	const Animal *meta = new Animal;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const Animal *wolf = new WrongAnimal();
	
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wolf->getType() << " " << std::endl;
	
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wolf->makeSound();
	
	delete meta;
	delete dog;
	delete cat;
	delete wolf;
	return (0);
}