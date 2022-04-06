/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:46 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/03 13:08:10 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	king("King", 1);
	Bureaucrat	falseking(king);
	Bureaucrat	queen("Queen", 2);
	Bureaucrat	peon("Peon", 149);
	Form		decretGuerre("guerre", 1, 1);

	std::cout << std::endl;

	std::cout << king << std::endl;
	std::cout << queen << std::endl;
	std::cout << peon << std::endl;
	std::cout << decretGuerre << std::endl;

	try
	{
		std::cout << " ---- First test: sign grade > 150 ----" << std::endl;
		Form		decret2("peace", 155, 10);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << " ---- Second test: execution grade > 150 ----" << std::endl;
		Form		decret2("peace", 10, 155);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << " ---- Third test: Level signature of the King == 1"
		" - Level of signature required == 1 ----" << std::endl;
	king.signForm(decretGuerre);
	std::cout << std::endl;
	
	std::cout << " ---- Fourth test: Level of signature of the King is now"
	" == 2 - Level required == 1 ----" << std::endl;
	king.IncrementGrade();
	king.signForm(decretGuerre);
	std::cout << std::endl;
	
	return 0;
}