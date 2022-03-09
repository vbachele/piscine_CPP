/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:21:58 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/09 14:52:46 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void strUppercase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		str[i] = toupper(str[i]);
		std::cout << str[i];
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while(++i < argc)
		{
			std::cout << str[i];
			strUppercase(argv[i]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	return (0);
}