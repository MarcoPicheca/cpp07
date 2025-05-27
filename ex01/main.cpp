#include "iter.hpp"

/**
 * PRIMO MAIN
 */
#include <iostream>
#include <cctype>

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'B', 'C'};

	std::cout << "Original:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, sizeof(a) / sizeof(char), ft_tolower);

	std::cout << "Changed:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;

	::iter(a, 2, ft_toupper);

	std::cout << "Changed:" <<
	"\n\ta[0]: " << a[0] <<
	"\n\ta[1]: " << a[1] <<
	"\n\ta[2]: " << a[2] <<
	std::endl << std::endl;
}


/**
 * SECONDO MAIN
 */

// void times_two(int &i)
// {
// 	i *= 2;
// }

// void to_upper(std::string &str)
// {
// 	for (size_t i = 0; i < str.length(); i++)
// 		str[i] = std::toupper(str[i]);
// }

// int main( void )
// {
// 	std::cout << "\033[33m" << "Test int array\n"<< "\033[0m";
// 	int int_arr[] = {1, 2, 3};

// 	::iter(int_arr, 3, times_two);
// 	for (int i = 0; i < 3; i++)
// 		std::cout << int_arr[i] << std::endl;

// 	std::cout << "\033[33m" << "Test string array\n"<< "\033[0m";
// 	std::string str_arr[] = {"Hello", "World", "!"};
// 	::iter(str_arr, 3, to_upper);
// 	for (int i = 0; i < 3; i++)
// 		std::cout << str_arr[i] << std::endl;

// 	return 0;
// }


/**
 * TERZO MAIN
 */

// int main()
// {
//     std::string arr[] = {"ciao", "bella", "mia"};
//     const int a[] = {1, 2, 3, 4 , 5};
//     iter(arr, 3, printElement_T<std::string>);
//     iter(a, 5, printElement_T<const int>);
//     return 0;
// }