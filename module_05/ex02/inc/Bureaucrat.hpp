/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:15:21 by vbachele          #+#    #+#             */
/*   Updated: 2022/04/03 23:40:47 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(std::string const &name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &obj);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	unsigned int			getGrade() const;
	virtual std::string		getName() const ;
	void	IncrementGrade();
	void	DecrementGrade();
	void	signForm(Form &form) const;
	void	executeForm(Form const &form);

private:
	std::string 	_name;
	unsigned int			_grade;
};

std::ostream &operator<<(std::ostream &out,Bureaucrat const &display);

#endif