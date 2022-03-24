/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:15:21 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/24 13:18:09 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

class Bureaucrat{
public:
	Bureaucrat;
	~Bureaucrat;
	void	GradeTooHighException();
	void	GradeTooLowException();
	void	getGrade();
	void	getGrade();
	void	incrementGrade();
	void	DecerementGrade();

private:
	std::string _name;
	int			_grade;
};

#endif