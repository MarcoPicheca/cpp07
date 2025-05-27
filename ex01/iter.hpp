#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void printElement_T(T& a)
{
	std::cout << a << std::endl;
}

template <typename T, typename U, typename F>
void iter(T* array, U len, F fun)
{
	if (len < 0)
	{
		std::cerr << "the lenght must be a >= 0 number or type.\n";
		return ;
	}
	for (U i = 0; i < len; i++)
	{
		fun(array[i]);
	}
}

#endif