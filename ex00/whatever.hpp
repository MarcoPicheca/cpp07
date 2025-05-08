#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T swap = a;
	a = b;
	b = swap;
}

// template <typename T>
// void cazzo(T a)
// {
// 	std::cout << "cazzo figa culo palle \n" << a << '\n';
// }

template <typename T>
T min(T& a, T& b)
{
	if (a == b)
		return b;
	else if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T& a, T& b)
{
	if (a == b)
		return b;
	else if (a > b)
		return a;
	else
		return b;
}

#endif