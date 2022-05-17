/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:43:17 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/17 19:03:01 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base { 
	public: virtual ~Base(void) {}
	};

class A: public Base {};
class B: public Base {};
class C: public Base {};

//I generate a random number between 3 - and I use switch to create one of the instance
Base	*generate(void)
{
	srand(time(NULL));
	int rand = std::rand() % 3;
	
	switch(rand)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A);
		case 1:
			std::cout << "B" << std::endl;
			return (new B);
		case 2:
			std::cout << "C" << std::endl;
			return (new C);
		default:
			return (NULL);
	}
}

void	identify_ptr(Base *p)
{
	if (dynamic_cast <A*> (p)) // Downcast here
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << "C" << std::endl;
}

void	identify_ref(Base &p)
{
	if (dynamic_cast <A*> (&p)) // Downcast here
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B*> (&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C*> (&p))
		std::cout << "C" << std::endl;
}

int main(void)
{
	Base *ptr = generate();
	identify_ptr(ptr);
	identify_ref(*ptr);
	delete ptr;

	return (0);
}