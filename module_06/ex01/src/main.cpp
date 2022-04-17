/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:18:32 by vincent           #+#    #+#             */
/*   Updated: 2022/04/17 21:20:38 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

struct Data {
	int A;
	int B;
};

// I send here the point of the struct from my main
uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

// Here i give the value uint of my struct data to reinterpret it in a pointer of my struct Data
Data	*deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main (void)
{
	Data *data = new Data;
	uintptr_t	serial;
	Data *copy = new Data;
	
	data->A = 42;
	data->B = 0;
	
	std::cout << "------------- HERE IS MY FIRST STRUCT data --------------" << std::endl;
	std::cout << "address: " << data << std::endl;
	std::cout << "Struct data: " << std::endl;
	std::cout << "A: " << data->A << std::endl;
	std::cout << "B: " << data->B << std::endl;
	std::cout << std::endl;
	
	std::cout << "------------- HERE I use the function serialize --------------" << std::endl;
	serial = serialize(data); //here i transform my adress to a uint_ptr
	
	std::cout << "serial: " << serial << std::endl;
	std::cout << std::endl;
	
	
	std::cout << "------------- HERE IS MY SECOND STRUCT copy who takes the address of data --------------" << std::endl;
	copy = deserialize(serial); // here copy takes the adress of uint ptr

	std::cout << "address: " << copy << std::endl;
	std::cout << "Struct copy: " << std::endl;
	std::cout << "A: " << copy->A << std::endl;
	std::cout << "B: " << copy->B << std::endl;
}