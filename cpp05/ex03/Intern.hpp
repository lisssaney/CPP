#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator = (const Intern &other);
	~Intern();
	Form *makeForm(const std::string &name, const std::string &target) const;
    int choose_form(const std::string &name) const;
  //  void	(Intern::*choose_form[4])(void);
};

#endif