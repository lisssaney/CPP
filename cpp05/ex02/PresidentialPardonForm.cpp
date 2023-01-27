#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("-no target-") {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : _target(other.getTarget()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this == &other)
		return (*this);
    this->_target = other.getTarget();
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!Form::getSign())
		throw Form::FormNotSignedException();
	if (Form::getExec_Grade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
   std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


