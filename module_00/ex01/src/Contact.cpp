/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:05 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/11 14:57:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	//std::cout << "Constructor created" << std::endl;
}

Contact::~Contact()
{
	//std::cout << "Destructor created" << std::endl;
}

// if ctrl_D, exit the program

int Contact::errors(void)
{
	if (std::cin.eof())
		exit(0);
	return (0);
}

/***

 If you enter in SEARCH the right number, it displays the right infos

***/
void Contact::display_contact(void)
{
	std::cout << m_LastName << std::endl;
	std::cout << m_FirstName << std::endl;
	std::cout << m_NickName << std::endl;
	std::cout << m_PhoneNumber << std::endl;
	std::cout << m_DarkestSecret << std::endl;
}

/*
	Here if we have more than 10 letters we replace by a '.'
 	with substr function
*/

void Contact::print_string(std::string str)
{
	std::cout << std::setw(10);
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str << "|";
}

/***
 	If you write SEARCH it displays all the right names
***/
void Contact::display_names(void)
{
	print_string(this->m_LastName);
	print_string(this->m_FirstName);
	print_string(this->m_NickName);
	std::cout << std::endl;
}

// Function to add the contact to contact[i]

void Contact::add_contact(void)
{
	std::cout << "Please put your info: last name" << std::endl;
	std::cin >> m_LastName;
	if (std::cin.eof())
		exit(0);
	std::cout << "Please put your info: first name" << std::endl;
	std::cin >> m_FirstName;
	if (std::cin.eof())
		exit(0);
	std::cout << "Please put your info: nickname" << std::endl;
	std::cin >> m_NickName;
	if (std::cin.eof())
		exit(0);
	std::cout << "Please put your info: phone number" << std::endl;
	std::cin >> m_PhoneNumber;
	if (std::cin.eof())
		exit(0);
	std::cout << "Please put your info: Your little darkest secret"
			<< std::endl;
	std::cin >> m_DarkestSecret;
	if (std::cin.eof())
		exit(0);
}

void Contact::ADD(void)
{
	add_contact();
}
