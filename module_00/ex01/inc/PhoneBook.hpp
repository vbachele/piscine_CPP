/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:06 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/10 17:32:11 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	Contact Contact[8];
	void 	SEARCH();
private:
};

#endif