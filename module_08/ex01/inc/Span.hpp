/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:30:32 by vincent           #+#    #+#             */
/*   Updated: 2022/05/10 09:43:04 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
# define	SPAN_HPP 

class Span {
public:
/***************** Canonical form **************/
	Span(unsigned int N);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &obj);
	void	addNumber(); //add a single number to the span, we will use it to add elements to the span
	void	shortestSpan(); // will find the shortest span stored between all the values stored
	void	longestSpan(); // will find the longest span stored between all the values stored
	//créer une fonction qui ajoute des centaines des ranges of iterators en one call
	
private:

};
#endif