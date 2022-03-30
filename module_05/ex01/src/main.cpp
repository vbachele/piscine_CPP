/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:46 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/30 18:19:49 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	Bureaucrat	king("King", 1);
	Bureaucrat	falseking(king);
	Bureaucrat	Queen("Queen", 2);
	Bureaucrat	peon("Peon", 149);
	Form		decret("guerre", 1, 1);

	std::cout << std::endl;

	std::cout << king << std::endl;
	std::cout << Queen << std::endl;
	std::cout << peon << std::endl;
	std::cout << decret << std::endl;

	try
	{
		Form		decret2("peace", 155, 10);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
	try
	{
		Form		decret2("peace", 155, 10);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	Queen.IncrementGrade();
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	peon.DecrementGrade();
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << std::endl;

	// try
	// {
	// 	Bureaucrat	emperor("emperor", 0);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat	poorguy("poorguy", 151);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl;

	// return 0;
}