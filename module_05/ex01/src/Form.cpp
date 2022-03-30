/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:41:35 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/30 16:16:56 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.cpp"

/***************** Canonical form **************/

Form::Form(std::string const &name, unsigned int required, unsigned int execute) :
						 _name(name), _required(required), _execute(execute)
{
	this._signed = false;
	std::cout << "Constructor is called" << std::endl;
}

Form::Form(Form const &src)
{
	std::cout << "Constructor with grade is called" << std::endl;
	*this = src; // copy all the element of src in the current instance

}

Form::~Form()
{
	std::cout << "Destructor is called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Form const &display)
{
	out << display.getName() << ": " << display.getGrade();
	return out;
}

Form &Form::operator=(Form const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	check_grade(obj._grade);
	this->_grade = obj.getGrade();
	return *this;
}
