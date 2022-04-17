/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/17 15:45:19 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main (int argc, char **argv)
{
	(void) argv;
	if (argc == 2)
	{
		Convertor test(argv[1]);
		test.displayConvertor();
	}
	else
	{
		std::cerr << "Need only one argument" << std::endl;
	}
	return (0);
}