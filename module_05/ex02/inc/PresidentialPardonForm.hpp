/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:31:10 by vincent           #+#    #+#             */
/*   Updated: 2022/04/05 17:28:40 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "iostream"
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	
public:
/***************** Canonical form **************/
	PresidentialPardonForm(std::string target = "default");
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
/***************** Members functions **************/
	virtual void execute();
private:
	std::string _target;
};

#endif