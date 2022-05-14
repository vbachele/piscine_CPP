/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:53:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 11:38:40 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	/***************** TEST WITH NORMAL ANIMAL **************/
	std::cout << "-------- TEST WITH NORMAL ANIMALS ------" << std::endl;
	const Animal *meta = new Animal;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << std::endl;
	
	std::cout << "I am a " << meta->getType() << " " << std::endl;
	std::cout << "I am a " << dog->getType() << " " << std::endl;
	std::cout << "I am a " << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	std::cout << std::endl;
	
	/***************** TEST WITH WRONG ANIMAL **************/

	std::cout << "-------- TEST WITH WRONG ANIMALS ------" << std::endl;
	const WrongAnimal *wolf = new WrongAnimal;
	const WrongAnimal *wrongCat = new WrongCat();
	const WrongCat *wrongCat2 = new WrongCat();
	std::cout << std::endl;
	
	std::cout << "I am a " << wolf->getType() << " " << std::endl;
	std::cout << "I am a " << wrongCat->getType() << " " << std::endl;
	std::cout << "I am a " << wrongCat2->getType() << " " << std::endl;
	std::cout << std::endl;
	
	wolf->makeSound();
	wrongCat->makeSound();
	wrongCat2->makeSound();
	
	std::cout << std::endl;
	delete wolf;
	delete wrongCat;
	delete wrongCat2;
	return (0);
}