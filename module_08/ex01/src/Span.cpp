/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:40:44 by vincent           #+#    #+#             */
/*   Updated: 2022/05/11 17:21:29 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <list>
# include <algorithm>
#include <cctype>

//   "Canonical form CPP                            //
Span::Span(unsigned int n) : _n(n)
{
}

Span &Span::operator=(Span const &rhs)
{
	this->_range.clear();
	this->_n = rhs._n;
	this->_range = rhs._range;
	return *this;
}

Span::Span(const Span &old_obj)
{
	*this = old_obj;
}

Span::~Span()
{
}

//   Members functions                            //

//Here we add the number and we check if the tab if we have enough roo;
void			Span::addNumber(unsigned int N)
{
	if (!this->_n)
		throw AlreadyFull();
	this->_range.push_back(N);
	this->_n--;
}

// Iterator allow to copy the list

unsigned int	Span::shortestSpan(void)
{
	//unsigned int	first;
	unsigned int	shortest;

	std::vector<int> tmp = this->_range;
	std::vector<int>::iterator it;
	if (this->_range.size() < 2)
		throw NoSpan();
	std::sort(tmp.begin(), tmp.end());
	for (it = tmp.begin(); it + 1 != tmp.end(); it++)
	{
		unsigned int diff = *(it + 1) - *it;
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	first;
	unsigned int	last;
	unsigned int	longest;

	if (this->_range.size() < 2)
		throw NoSpan();
	// throw l'error quand c'est full
	std::sort(this->_range.begin(), this->_range.end());
	std::vector<int>::iterator begin = this->_range.begin();
	first = *begin;
	last = this->_range.back();
	longest = last - first;
	return (longest);
}

// We allocate randomly the numbers and we create the associate range

void Span::AddThousandNumbers(unsigned int n, int range)
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
		this->addNumber(rand() % range);
}