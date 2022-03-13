/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:04:14 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/13 22:58:47 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;
	std::string input;

	std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cout << "Enter a level : " << std::endl;
	std::cin >> input;
	karen.complain(input);
	return (0);
}