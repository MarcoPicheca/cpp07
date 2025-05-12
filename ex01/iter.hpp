#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T* array, size_t len, void (*func_p)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func_p(array[i]);
	}
}


// template <typename T, typename U>
// void iter(T* array, U* arr, size_t len, void (*func_p)(T&), void (*func_u)(U&))
// {
// 	for (size_t i = 0; i < len; i++)
// 	{
// 		func_p(array[i]);
// 		func_u(arr[i]);
// 	}
// }

template <typename T>
void printElement_T(T& a)
{
	std::cout << a << std::endl;
}

// template <typename U>
// void printElement_U(U& a)
// {
// 	std::cout << a << std::endl;
// }

#endif