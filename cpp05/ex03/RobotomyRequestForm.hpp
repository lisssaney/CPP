#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : virtual public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
	    RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        std::string getTarget() const;
	    void execute(Bureaucrat const & executor) const;
    private:
        std::string _target;

};

#endif