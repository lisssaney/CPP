#include <iostream>
#include "All.hpp"
#include <ctime>
#include <unistd.h>

int main(void)
{
    Base *o;
	for (int i = 0; i < 10; i++)
	{
        if ((o = generate()) == NULL)
            return (0);
	//	Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify(o);
		std::cout << ", ";
		identify(*o);
		std::cout << std::endl;
		delete o;
        sleep (1);
	}

	return (0);
}