#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("OlegB1", 50);
        Bureaucrat b2("SerjB2", 55);

        Form f1("A form", 25, 20);
        Form f2("B form", 55, 30);

        b1.signForm(f1);
        b2.signForm(f2);
        b1.signForm(f2);
        b2.signForm(f1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form f3("Form f3", 0, 67);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}