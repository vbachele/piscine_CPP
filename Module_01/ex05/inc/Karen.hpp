/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:01:38 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/13 22:08:30 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H 
#include "iostream"

class Karen{
public:
	Karen();
	~Karen();
	void complain(std::string level); // must call for 1 of the 4 functions depending of the level

private:
	void debug();
	void info();
	void warning();
	void error();
};

#endif