#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    /*Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;*/

    std::cout << "MY TESTS" << std::endl;

	Array<int> intT;

	Array<int> intTER(7);
	intT = intTER;
	for (size_t i = 0; i < intT.size(); i++)
	{
		intT[i] = i;
        std::cout << intT[i] << " ";
	}
    std::cout << std::endl;
	Array<std::string> str1(7);
	for (size_t i = 0; i < str1.size(); i++)
	{
		str1[i] = "str" + std::to_string((int)i);
		std::cout << str1[i] << " ";
	}
    std::cout << std::endl;
	Array<std::string> str2(str1);
	for (size_t i = 0; i < str2.size(); i++)
	{
		std::cout << str2[i] << " ";
	}
    std::cout << std::endl;
    Array<float> dub;
    Array<float> dub1(4);
    for (size_t i = 0; i < dub1.size(); i++)
    {
        dub1[i] = i + 0.1;
        std::cout << dub1[i] << " ";
    }
    std::cout << std::endl;
    try
    {
        std::cout << dub[0] << " ";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}