/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:54:54 by vbachele          #+#    #+#             */
/*   Updated: 2022/03/12 19:19:48 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

int main(void)
{
	/************* INITIALIZATION ****************/ 
	std::string brain = "HI THIS IS BRAIN";
	std::string *PTR = &brain;
	std::string &REF = brain;
	/************* PRINT TO SCREEN ADDRESS ***************/
	std::cout << "value of Address string " << &brain << std::endl;
	std::cout <<  "value of Address stringPTR " << PTR << std::endl;
	std::cout <<  "value of Address stringREF " << &REF << std::endl;
	/************* PRINT TO SCREEN VALUE ***************/
	std::cout <<  "value of string " << brain << std::endl;
	std::cout <<  "value of stringPTR " << *PTR << std::endl;
	std::cout << "value of stringREF " <<  REF << std::endl;
}