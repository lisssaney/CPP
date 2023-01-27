#include "Form.hpp"

Form::Form(void) : _name("-No name-"), _sign_grade(150), _exec_grade(150), _sign(false) { }

Form::Form(std::string const name, int const sign_grade, int const exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _sign(false)
{
    if (sign_grade > 150 || exec_grade > 150)
        throw Form::GradeTooLowException();
    else if (exec_grade < 1 || sign_grade < 1)
        throw Form::GradeTooHighException();
//     this->_sign_grade = sign_grade;
//    this->_exec_grade = exec_grade;
}

Form::~Form() { }

Form::Form(const Form &other) : _name(other._name), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade), _sign(other._sign)
{
    if (other._sign_grade > 150 || other._exec_grade > 150)
        throw Form::GradeTooLowException();
    else if (other._exec_grade < 1 || other._sign_grade < 1)
        throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &other)
{
    if (other._sign_grade > 150 || other._exec_grade > 150)
        throw Form::GradeTooLowException();
    else if (other._exec_grade < 1 || other._sign_grade < 1)
    if (this == &other)
        return (*this);
    this->_sign = other._sign;
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getSign_Grade() const
{
    return (_sign_grade);
}

int Form::getExec_Grade() const
{
    return (_exec_grade);
}

bool Form::getSign() const
{
    return (_sign);
}

void Form::beSigned(const Bureaucrat &other)
{
    if (this->_sign_grade < other.getGrade())
        throw Form::GradeTooLowException();
    else
        this->_sign = true;
}

std::ostream &operator << (std::ostream &out, const Form &obj)
{
	out << obj.getName() << " form sign_grade: " << obj.getSign_Grade() << ", execute_grade: " << obj.getExec_Grade() << ", is_signed: " << obj.getSign();
	return (out);
}
