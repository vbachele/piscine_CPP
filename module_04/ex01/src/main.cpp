/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:53:27 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 12:01:57 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	//************* first part test create array of Animal ******************
	// Use a pointer to create a copy of the address doesn't work unless this
	Animal *animal[4];
	std::cout << "****First test array of animal****" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animal[i];

	//**********  second part attribute a dog through a Animal  ***************
	std::cout << std::endl;
	std::cout << "****Second test attribute dog and cat****" << std::endl;
	std::cout << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;

	//*****  Third test do a copy of a Dog in aother dog to copy the brain******
	std::cout << std::endl;
	std::cout << "****Third test copy of dog(one) in dog 2****" << std::endl;
	std::cout << std::endl;
	Dog *first = new Dog;
	Dog *second = new Dog(*first);

	delete first;
	delete second;

	//*****  Include idea in the brain ******
	std::cout << std::endl;
	std::cout << "****Fourth test : Ideas included****" << std::endl;
	std::cout << std::endl;

	Cat *cat2 = new Cat;
	cat2->train();
	cat2->brainScan();

	delete cat2;

	return (0);
}