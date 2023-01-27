#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat extra("Extra", 149);
    Bureaucrat b1("Maria", 34);
    Bureaucrat b2("Julia", 3);
    Form *f1 = new ShrubberyCreationForm("tree");
    Form *f2 = new RobotomyRequestForm("request");
    Form *f3 = new PresidentialPardonForm("pardon");
    std::cout << *f1 << std::endl;
    extra.signForm(*f1);
    try { b1.executeForm(*f1); }
    catch(std::exception &e) { std::cout << e.what() << std::endl; }
    b1.signForm(*f1);
    b1.signForm(*f1);
    b1.executeForm(*f1);
    std::cout << std::endl;
    std::cout << *f2 << std::endl;
    b1.signForm(*f2);
    b1.executeForm(*f2);
    std::cout << std::endl;
    std::cout << *f3 << std::endl;
    b1.signForm(*f3);
    b2.signForm(*f3);
    b2.executeForm(*f3);
    delete f1;
    delete f2;
    delete f3;
    return (0);

}