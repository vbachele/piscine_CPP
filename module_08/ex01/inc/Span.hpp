/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:30:32 by vincent           #+#    #+#             */
/*   Updated: 2022/05/11 17:12:36 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
# define	SPAN_HPP
#include <iostream>
#include <vector>
# include <algorithm>
#include <functional>

class NoSpan : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("No span found");
		}
};

class AlreadyFull : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Already full");
		}
};

class Span {
public:
/***************** Canonical form **************/
	Span(unsigned int N);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &obj);
	void			addNumber(unsigned int N); //add a single number to the span, we will use it to add elements to the span
	unsigned int	shortestSpan(); // will find the shortest span stored between all the values stored
	unsigned int	longestSpan(); // will find the longest span stored between all the values stored
	void			AddThousandNumbers(unsigned int N, int range);//créer une fonction qui ajoute des centaines des ranges of iterators en one call

private:
	unsigned int		_n;
	std::vector <int> 	_range;
};
#endif