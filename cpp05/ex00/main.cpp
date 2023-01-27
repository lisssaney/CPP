#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur1("Lisa", 10);
		std::cout << bur1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
	try
	{
		Bureaucrat bur2("Olga", 150);
        bur2.downGrade();
		std::cout << bur2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
	try
	{
		Bureaucrat bur3("Nastya", 23);
        bur3.upGrade();
        bur3.upGrade();
		std::cout << bur3 << std::endl;
        std::cout << std::endl;
		Bureaucrat bur4("Ida");
        std::cout << bur4 << std::endl;
        bur4.upGrade();
		std::cout << bur4 << std::endl;
        // std::cout << std::endl;
        // Bureaucrat bur5("Milana", 0);
		// std::cout << bur4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
        std::cout << std::endl;
        Bureaucrat bur5("Milana", 0);
		std::cout << bur5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}