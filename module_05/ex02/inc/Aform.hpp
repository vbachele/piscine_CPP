/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:56:46 by vincent           #+#    #+#             */
/*   Updated: 2022/04/02 19:58:55 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

public class Aform {
public :
	/***************** Canonical form **************/
	Aform(std::string const &name, unsigned int grade);
	Aform(Aform const &src);
	~Aform();
	Aform &operator=(Aform const &obj);
private:

}
#endif
