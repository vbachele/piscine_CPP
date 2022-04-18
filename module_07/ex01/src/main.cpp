/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/18 17:09:26 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

//Here the main objective is to read every member of the array
int main (void)
{
	std::string string[3] = {"Vincent", "Marine", "Tiffany"};
	int			integer[4] = {10, -55, 20, 0};

	iter(string, 3, &f1);
    iter(integer, 4, &f1);
	return (0);
}