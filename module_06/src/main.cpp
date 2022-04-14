/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/12 17:21:58 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main (int argc, char **argv)
{
	(void) argv;
	if (argc == 2)
	{
		Convertor test(argv[1]);
		test.getFloatConvertor();
	}
	else
	{
		std::cerr << "Need only one argument" << std::endl;
	}
	return (0);
}