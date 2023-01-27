#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
# include <string>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(std::string const name);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat(void);
        std::string getName(void) const;
        int getGrade(void) const;
        void upGrade(void);
        void downGrade(void);
        void signForm(Form &other);
        void executeForm(Form const &form);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("Grade is too high");
            }
        };
        class GradeTooLowException : public std::exception
        {        
            virtual const char *what() const throw()
            {
                return ("Grade is too low");
            }
        };

    private:
        std::string const _name;
        int _grade;
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif