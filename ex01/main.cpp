#include "iter.hpp"

int main()
{
    std::string arr[] = {"ciao", "bella", "mia"};
    // int len[] = {4, 5, 3};
    // ::iter(arr, len, 3, printElement_T, printElement_U);
    ::iter(arr, 3, printElement_T);
    return 0;
}