/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:17:46 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/10 20:54:52 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	intern;
	Form	*robot;
	Form	*president;
	Form	*shrub;
	
	std::cout << std::endl;
	/***************** Creation of the 3 forms **************/
	robot = intern.MakeForm("robotomy request", "Bender");
	std::cout << *robot << std::endl;
	shrub = intern.MakeForm("shruberry request", "shrub");
	std::cout << *shrub << std::endl;
	std::cout << std::endl;
	president = intern.MakeForm("presidential request", "Vincent");
	std::cout << *president << std::endl;
	/***************** Errors handling **************/
	std::cout << std::endl;
	std::cout << "Error empty string" << std::endl;
	intern.MakeForm("", "Vincent");
	std::cout << std::endl; // penser à delete
	return 0;
}