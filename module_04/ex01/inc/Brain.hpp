/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:42:25 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/23 15:19:13 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include "iostream"
# include "Animal.hpp"

class Brain{

public:
// +------------------------------------------+ //
//   Canonical form                            //
// +------------------------------------------+ //
public:
	Brain();
	Brain(const Brain &old_obj);
	Brain &operator=(Brain const &obj);
	virtual ~Brain();
	void	putIdea();
	void	getIdea();
	std::string _ideas[100];
};

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //




#endif