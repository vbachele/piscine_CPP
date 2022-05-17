/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:50:27 by vincent           #+#    #+#             */
/*   Updated: 2022/05/17 17:55:55 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

#include <cmath>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Conversion	convert(av[1]);
		convert.display();
	}
	else
		std::cerr << "error: bad arguments" << std::endl;
	return (0);
}