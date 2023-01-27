#include <string>
#include <cmath>
#include "iter.hpp"

template<typename T>
void display(T &value)
{
	std::cout << value << " ";
}

int main(void)
{
	std::string stringR[4] = { "words", "in", "this", "braces"};
	iter(stringR, 4, &display); 
    std::cout << std::endl;
	iter(stringR, 2, &display); 
    std::cout << std::endl;
	iter(stringR, 1, &display); 
    std::cout << std::endl;

	int intT[5] = { 0, 1, 2, 3, 4 };
	iter(intT, 5, &display); 
    std::cout << std::endl;

	float floatT[5] = { 5.0f, 6.1f, 7.2f, 8.3f, 9.4f };
	iter(floatT, 5, &display); 
    std::cout << std::endl;

	double doubleE[5] = { 10.00, 11.11, 12.22, 13.33, 14.44 };
	iter(doubleE, 5, &display); 
    std::cout << std::endl;

	return (0);
}
