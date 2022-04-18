/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/18 12:50:34 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

void	swap_test(void)
{
	int 		X = 42;
	int 		Y = 0;
	std::string mr = "George";
	std::string mrs = "Julia";
	float 		float_1 = 5.4f;
	float		float_2 = 50.50f;
	/************* test 1: Swap 2 int ***************/
	std::cout << "---------- TEST SWAP ON INT ------------" << std::endl;
	std::cout << "X = " << X << std::endl;
	std::cout << "Y = " << Y<< std::endl;
	std::cout << "------- SWAP -------" << std::endl;
	swap(X, Y);
	std::cout << "X = " << X << std::endl;
	std::cout << "Y = " << Y<< std::endl;
	std::cout << std::endl;
	/************* test 2: Swap 2 string ***************/
	std::cout << "---------- TEST SWAP ON STRING ------------" << std::endl;
	std::cout << "mr = " << mr << std::endl;
	std::cout << "mrs = " << mrs<< std::endl;
	std::cout << "------- SWAP -------" << std::endl;
	swap(mr, mrs);
	std::cout << "mr = " << mr << std::endl;
	std::cout << "mrs = " << mrs<< std::endl;
	std::cout << std::endl;
	std::cout << "---------- TEST SWAP ON FLOAT------------" << std::endl;
	std::cout << "float_1 = " << float_1 << std::endl;
	std::cout << "flota_2 = " << float_2<< std::endl;
	std::cout << "------- SWAP -------" << std::endl;
	swap(float_1, float_2);
	std::cout << "float_1 = " << float_1 << std::endl;
	std::cout << "float_2 = " << float_2<< std::endl;
	std::cout << std::endl;
}

void	min_test(void)
{
	int a;
	int b;
	
	a = 42;
	b = 0;
	std::string string_1 = "George";
	std::string string_2 = "Julia";
	std::string __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2 = "Julia";
	/************* test 1: Swap 2 int ***************/
	std::cout << "---------- TEST MAX ON INT ------------" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min = " <<  min(b, a) << std::endl;
	std::cout << "---------- TEST MAX ON STRING ------------" << std::endl;
	std::cout << "string_2 = " << string_2 << std::endl;
	std::cout << "string_1 = " << string_1 << std::endl;
	std::cout << "min = " <<  min(string_1, string_2) << std::endl;
}

void	max_test(void)
{
	int a;
	int b;
	
	a = 42;
	b = 0;
	std::string string_1 = "George";
	std::string string_2 = "Julia";
	std::string __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2 = "Julia";
	/************* test 1: Swap 2 int ***************/
	std::cout << "---------- TEST MIN ON INT ------------" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max = " <<  max(b, a) << std::endl;
	std::cout << "---------- TEST MIN ON STRING ------------" << std::endl;
	std::cout << "string_2 = " << string_2 << std::endl;
	std::cout << "string_1 = " << string_1 << std::endl;
	std::cout << "max = " <<  max(string_1, string_2) << std::endl;
}

int main (void)
{
	swap_test();
	min_test();
	max_test();
	return (0);
}