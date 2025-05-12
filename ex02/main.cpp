#include "Array.hpp"

int main() {
	Array<int> a(5);
	a[0] = 42;
	a[1] = 99;

	Array<int> b = a;
	b[1] = 123;
	std::cout << "Array a: ";
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << a[i] << ' ';
	std::cout << '\n';
	std::cout << "Array b: ";
	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << b[i] << ' ';
	std::cout << '\n';
	try
	{
		std::cout << a[10] << '\n';
	}
	catch (std::exception& e)
	{
		std::cerr << "Eccezione catturata: " << e.what() << '\n';
	}
	return 0;
}
