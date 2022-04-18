#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>


template <class T>
	void	swap(T &x, T &y)
	{
		T temp;
		temp = x;
		x = y;
		y = temp;
	}
template <class T>
	T	min(T &x, T &y)
	{
		return const_cast <T &> (x < y ? x : y);
	}
inline const char * min(const char *s1, const char *s2)
{
	return strcmp(s1, s2) < 0 ? s1 : s2;
}
template <class T>
	T	max(T &x, T &y)
	{
		return const_cast <T &> (x > y ? x : y);
	}
inline const char * max(const char *s1, const char *s2)
{
	return strcmp(s1, s2) > 0 ? s1 : s2;
}
#endif