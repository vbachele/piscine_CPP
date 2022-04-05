/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:46 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/05 17:33:07 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat				king("King", 1);
	ShrubberyCreationForm 	outfile("outfile");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	fillon("fillon");
	
	/***************** SHRUBERRY TEST **************/
	std::cout << std::endl;
	std::cout << "---------- SHRUBERRY TEST ----------" << std::endl;
	Bureaucrat	jean_shruberry("jean_shruberry", 138);
	outfile.beSigned(jean_shruberry);
	jean_shruberry.executeForm(outfile);
	jean_shruberry.DecrementGrade();
	jean_shruberry.executeForm(outfile);
	std::cout << std::endl;
	/***************** ROBOTOMY TEST **************/
	Bureaucrat	kevin_robotomy("kevin_robotomy", 46);
	robot.beSigned(kevin_robotomy);
	kevin_robotomy.executeForm(robot);
	kevin_robotomy.DecrementGrade();
	kevin_robotomy.executeForm(robot);
	std::cout << std::endl;
	/***************** PRESIDENTIAL TEST **************/
	Bureaucrat	chirac("chirac", 6);
	fillon.beSigned(chirac);
	chirac.executeForm(fillon);
	chirac.DecrementGrade();
	chirac.executeForm(fillon);
	
	std::cout << std::endl;
	
	return 0;
}