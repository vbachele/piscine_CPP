/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:08 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/10 17:54:16 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "PhoneBook.hpp"
#include "Contact.hpp"

static std::string	prompt(void)
{
	std::string	input;

	std::cout << "*************************" << std::endl;
	std::cout << "*   Awesome PhoneBook   *" << std::endl;
	std::cout << "*   ADD, SEARCH, EXIT   *" << std::endl;
	std::cout << "*************************" << std::endl;
	std::cin >> input;
	return (input);
}

void	display_contact(PhoneBook book)
{
	int input;
	book.SEARCH();
	while (1)
	{
		std::cout << "Please enter an index to have all the information"
					<< std::endl;
		std::cin >> input;
		if (std::cin.fail() == true)
			std::cout << "index out of range" << std::endl;
		else if (input > 0 && input <= 8)
		{
			book.Contact[input].display_contact();
			return ;
		}
		else
			std::cout << "You didn't put a number" << std::endl;

	}
}

int main(int argc, char **argv)
{
	PhoneBook book;
	std::string input;
	int i;

	i = 0;
	(void) argv;
	if (argc != 1)
		std::cout << "You need to put only ADD, SEARCH or EXIT" << std::endl;
	else
	{
		while (1)
		{
			input = prompt();
			if (input == "ADD")
			{
				book.Contact[i].ADD();
				i++;
			}
			else if (input == "SEARCH")
				display_contact(book);
			else if ((input == "EXIT") || std::cin.eof())
				exit(0);
			else
				std::cout << "You have to enter ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}