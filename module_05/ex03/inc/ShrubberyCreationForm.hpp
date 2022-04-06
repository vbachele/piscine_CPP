/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:23:26 by vincent           #+#    #+#             */
/*   Updated: 2022/04/05 17:29:27 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "iostream"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
public:
	/***************** Canonical form **************/
	ShrubberyCreationForm(std::string target = "default");
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

	/***************** members functions **************/
	virtual void	execute(void) const;

	/***************** Error functions **************/
	class FailedToOpenFileException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:
	std::string _target;
};

#endif