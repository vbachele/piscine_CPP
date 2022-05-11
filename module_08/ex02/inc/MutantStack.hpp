/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:30:32 by vincent           #+#    #+#             */
/*   Updated: 2022/05/11 17:52:37 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP
#include	<iostream>
#include 	<stack>
#include 	<list>
namespace 	ft = std;
# include	<algorithm>
#include	<functional>

template<typename T>
class MutantStack : public ft::stack<T>
{
public:
	MutantStack() {
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

	typedef typename ft::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	};
	iterator end() {
		return this->c.end();
	};
};

#endif