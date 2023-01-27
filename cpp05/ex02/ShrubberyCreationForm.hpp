#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"

class ShrubberyCreationForm;

class ShrubberyCreationForm : virtual public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
	    ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        std::string getTarget() const;
	    void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;

};

#endif