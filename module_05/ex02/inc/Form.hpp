/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:29:18 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/30 18:22:24 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
#include "Bureaucrat.hpp"
#include "iostream"

class Bureaucrat;  // Ici on peut appeler les fonction publiques de Bureaucrat

class	Form
{
public:
	//   canonical form                            //
	Form(std::string const &name, unsigned int required, unsigned int execute);
	Form(Form const &src);
	~Form();
	Form &operator=(Form const &obj);

	//   members functions                            //
	virtual std::string 			getName() const;
	void							beSigned(Bureaucrat bureaucrat);
	unsigned int					levelSignature() const;
	unsigned int					levelExecution() const;
	bool							getIsSigned() const;

	//   exception                       		   //
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

private:
	std::string const 	_name;
	bool				_signed;
	unsigned int		_required;
	unsigned int		_execute;
};

std::ostream &operator<<(std::ostream &out, Form const &display);

#endif