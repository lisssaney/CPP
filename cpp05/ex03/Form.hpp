#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form();
        Form(std::string name, int sign_grade, int exec_grade);
        virtual ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        std::string getName() const;
        int getSign_Grade() const;
        int getExec_Grade() const;
        bool getSign() const;
        //void setSign();
        void beSigned(const Bureaucrat &obj);
        virtual void execute(Bureaucrat const & executor) const = 0;
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
        class FormNotSignedException : public std::exception
        {
        public:
            const char *what() const throw()
            {
                return ("FORM is not signed exception");
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