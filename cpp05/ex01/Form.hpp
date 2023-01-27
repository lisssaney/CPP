#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form();
        Form(std::string const name, int const sign_grade, int const exec_grade);
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        std::string getName() const;
        int getSign_Grade() const;
        int getExec_Grade() const;
        bool getSign() const;
        //void setSign();
        void beSigned(const Bureaucrat &obj);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return ("FORM Grade is too high");
            }
        };
        class GradeTooLowException : public std::exception
        {        
            virtual const char *what() const throw()
            {
                return ("FORM Grade is too low");
            }
        };
    private:
        const std::string _name;
        const int _sign_grade;
        const int _exec_grade;
        bool _sign;
};

std::ostream &operator<<(std::ostream &out, const Form &other);

#endif