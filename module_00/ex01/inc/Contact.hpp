/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:50 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/10 17:37:08 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include "iostream"
#include <stdlib.h>

class Contact{

public:
	Contact();
	~Contact();
	void	add_contact(void);
	void	ADD(void);
	int 	errors(void);
	void	display_names(void);
	void 	display_contact(void);

private:
	std::string m_LastName;
	std::string m_FirstName;
	std::string	m_PhoneNumber;
	std::string m_NickName;
	std::string m_DarkestSecret;
};

#endif