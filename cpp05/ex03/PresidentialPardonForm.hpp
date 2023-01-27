#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : virtual public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
	    PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        std::string getTarget() const;
	    void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif