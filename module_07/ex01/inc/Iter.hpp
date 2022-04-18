#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <class T>
	// x = adress of an array, y = length of the array, z = function every element of an array
void	iter(T *array, int length, void (*f)(T &z)) 
{
	for(int i = 0; i < length; i++)
		f(array[i]);
}

// Here we work with type like integers, double etc...
template<typename T>
void	f1(T &arg)
{
    std::cout << "Can print whatever type the argument is: " << arg << std::endl;
}

// here I print a string
inline void f1(std::string &str)
{
    std::cout << "String is: " << str << std::endl;
}
#endif