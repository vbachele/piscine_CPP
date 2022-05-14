/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:42:25 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/14 11:55:50 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include "iostream"
# include "Animal.hpp"

class Brain{
	// +------------------------------------------+ //
	//   Canonical form                            //
	// +------------------------------------------+ //
public:
	Brain();
	Brain(const Brain &old_obj);
	Brain &operator=(Brain const &obj);
	virtual ~Brain();
	// +------------------------------------------+ //
	//   MEMBER FUNCTION					        //
	// +------------------------------------------+ //
	void	putIdea();
	void	getIdea();
	std::string _ideas[100];
};





#endif