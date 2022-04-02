/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:23:26 by vincent           #+#    #+#             */
/*   Updated: 2022/04/02 19:55:52 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "iostream"
#include "Aform.hpp"

public class ShrubberyCreationForm {
public:
/***************** Canonical form **************/
ShrubberyCreationForm(std::string const &target, Aform const &aform)
ShrubberyCreationForm(ShrubberyCreationForm const &src)
~ShrubberyCreationForm()
ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj)

/***************** members functions **************/
void	execute(void) const;

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