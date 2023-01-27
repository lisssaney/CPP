#include "Intern.hpp"
#include <string>

int Intern::choose_form(const std::string &name) const
{
	std::string str[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (name.compare(str[i]) == 0)
        {
            std::cout << "Intern creates " << str[i] << std::endl;
            return (i);
        }
    }
    return (-1);  
}

Intern::Intern() { }

Intern::Intern(const Intern &other) { *this = other; }

Intern &Intern::operator = (const Intern &other)
{
    if (this == &other)
        return (*this);
    *this = other;
    return (*this); 
}

Intern::~Intern() {}

Form *Intern::makeForm(const std::string &name, const std::string &target) const
{
    switch (choose_form(name))
    {
        case 0: { return (new PresidentialPardonForm(target)); }
        case 1: { return (new RobotomyRequestForm(target)); }
        case 2: { return (new ShrubberyCreationForm(target)); }
        default:
        {
            std::cout << "There is no form like that!!" << std::endl;
            return (NULL);
        }
    }
}