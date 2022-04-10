/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:37:24 by vincent           #+#    #+#             */
/*   Updated: 2022/04/10 20:56:15 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/***************** Canonical form **************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137), _target(target) // prend un nom et 2 valeurs valeurs
{
	std::cout << this->_target << std::endl;
	std::cout << "Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs); // Aform doit etre un modèle de formulaire sur lesquels on va créer 3 formulaires derrière
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/***************** member functions **************/

void		ShrubberyCreationForm::execute() const
{
	std::ofstream outfile;
	std::string filename = this->_target + "Shrubbery";
	outfile.open(filename.c_str());
	if (outfile.fail())
		throw ShrubberyCreationForm::FailedToOpenFileException();
	outfile << "                                              ." << std::endl;
	outfile << "                                   .         ;" << std::endl;
	outfile << "      .              .              ;%     ;;" << std::endl;
	outfile << "        ,           ,                :;%  %;" << std::endl;
	outfile << "         :         ;                   :;%;'     .," << std::endl;
	outfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	outfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
	outfile << "               `@%%. `@%%    ;@@%;" << std::endl;
	outfile << "                 ;@%. :@%%  %@@%;" << std::endl;
	outfile << "                   %@bd%%%bd%%:;" << std::endl;
	outfile << "                     #@%%%%%:;;" << std::endl;
	outfile << "                     %@@%%%::;" << std::endl;
	outfile << "                     %@@@%(o);  . '" << std::endl;
	outfile << "                     %@@@o%;:(.,'" << std::endl;
	outfile << "                 `.. %@@@o%::;" << std::endl;
	outfile << "                    `)@@@o%::;" << std::endl;
	outfile << "                     %@@(o)::;" << std::endl;
	outfile << "                    .%@@@@%::;" << std::endl;
	outfile << "                    ;%@@@@%::;." << std::endl;
	outfile << "                   ;%@@@@%%:;;;." << std::endl;
	outfile << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	outfile.close();
	
}

char const	*ShrubberyCreationForm::FailedToOpenFileException::what(void) const throw()
{
	return ("couldn't open this file");
}
