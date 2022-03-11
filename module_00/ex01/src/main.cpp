/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:08 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 15:19:19 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include <limits>
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

/***
     - La methode fail permet de renvoyer une erreur.
	 - Ici si on ne rentre pas 0 a 8, c'est considere comme une erreur
	 - clear va remettre le std::cin capable de nous fournir une valeur
	 - Objectif repartir a 0
	 - ignore va ignorer tout le reste de la ligne sauf le /n qui agit
	 comme un delimiteur
	 - std::numeric_limits<std::streamsize>::max() = mets le nombre
	 maximum de caracteres a ignorer, on dit a cin d'ignorer le max de caractere
***/

void	display_contact(PhoneBook book)
{
	int input;
	book.SEARCH();
	while (1)
	{
		std::cout << "Please enter an index to have all the information"
					<< std::endl;
		std::cin >> input;
		if (input > 0 && input <= 8)
		{
			book.Contact[input - 1].display_contact();
			return ;
		}
		else if (std::cin.fail() == true)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
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
		std::cout << "You need to put only ./megaphone" << std::endl;
	else
	{
		while (1)
		{
			input = prompt();
			if (input == "ADD")
			{
				if (i == 8)
					i = 0;
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