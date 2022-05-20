/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:30:32 by vincent           #+#    #+#             */
/*   Updated: 2022/05/20 15:07:10 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP
#include	<iostream>
#include 	<stack>
#include 	<list>
# include	<algorithm>
#include	<functional>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) {
	}
	
	MutantStack(const MutantStack<T>& src) {
		*this = src;
	}
	
	MutantStack<T>& operator=(const MutantStack<T>& rhs)
	{
		this->c = rhs.c;
		return *this;
	};

	~MutantStack()
	{

	};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	};
	iterator end() {
		return this->c.end();
	};
};

#endif