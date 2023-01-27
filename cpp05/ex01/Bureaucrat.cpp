# include "Bureaucrat.hpp"

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

Bureaucrat::Bureaucrat(void) : _name("-No name-"), _grade(150) { }

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name), _grade(150) {}

Bureaucrat::~Bureaucrat(void) { }

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    if (other._grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (other._grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = other._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (other._grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (other._grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (this == &other)
        return (*this);
    this->_grade = other._grade;
    return (*this);
}

void Bureaucrat::upGrade(void)
{
    ++this->_grade;
    if (_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::downGrade(void)
{
    --this->_grade;
    if (_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &other)
{
    if (other.getSign() == true)
    {
        std::cout << this->_name << " cannot sign " << other.getName() << " .It is already signed" << std::endl;
        return ;
    }
    else if (other.getSign_Grade() < this->_grade)
    {
        std::cout << this->_name << " cannot sign " << other.getName() << " .Bureaucrat does not have grade high enough" << std::endl;
		return ;
    }
	else
		std::cout << this->_name << " signs " << other.getName() << std::endl;
	other.beSigned(*this);
}