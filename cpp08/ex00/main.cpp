#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> myList;
    for (int count = 0; count < 5; ++count)
        myList.push_back(count);
    std::cout << easyfind(myList, 2) << std::endl;
    std::cout << easyfind(myList, 4) << std::endl;
    myList.push_back(144);
    std::cout << easyfind(myList, 144) << std::endl;
    try
    {
        std::cout << easyfind(myList, 23) << std::endl;
    }
    catch (const std::string &e)
    {
        std::cout << e << std::endl;
    }
    return (0);
}