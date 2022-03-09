/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:06 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/09 17:56:58 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	void ADD(char *FirstName, char *LastName, int PhoneNumber
			, char *DarkestSecret);
	void SEARCH(char *contact);
	void EXIT(void);


private:


};

#endif