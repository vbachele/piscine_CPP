/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:25:03 by vincent           #+#    #+#             */
/*   Updated: 2022/04/03 23:16:30 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "iostream"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	/***************** Canonical form **************/
	RobotomyRequestForm(std::string target = "default");
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
	/***************** member functions **************/
	virtual void	execute(void) const;
	class FailedToRobotomizeException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

private:
		std::string _target;
};

#endif