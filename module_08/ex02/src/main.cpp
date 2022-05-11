/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/05/11 18:19:08 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

void	test_list(void)
{
	//   "TEST WITH LIST"                            //
	std::cout << "TEST WITH LIST " << std::endl;
	std::list <int> list_stack;
	std::list <int>::iterator it_erase;
	list_stack.push_back(5);
	list_stack.push_back(17);
	std::cout << "Last element: " << list_stack.back() << std::endl;
	// // On recup le dernier argument de la list pour le supprimer
	list_stack.pop_back();
	std::cout << "Size: " << list_stack.size() << std::endl;
	list_stack.push_back(3);
	list_stack.push_back(5);
	list_stack.push_back(737);
	list_stack.push_back(0);

	std::list <int>::iterator it_list = list_stack.begin();
	std::list <int>::iterator ite_list = list_stack.end();

	++it_list;
	--it_list;

	//display of the list
	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}
	std::list<int> s(list_stack);
}

void test_stack()
{
	//   "TEST WITH STACK"                            //
	std::cout << "TEST WITH STACK" << std::endl;
	MutantStack <int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last element: "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack <int> s(mstack);
	std::cout << "------------------------------" <<std::endl;
}

int main (void)
{
	test_stack();
	test_list();
	return 0;
}