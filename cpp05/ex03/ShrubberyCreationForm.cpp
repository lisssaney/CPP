#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("-no target-") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : _target(other.getTarget()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this == &other)
		return (*this);
    this->_target = other.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string asciiTree = 
	"                                   .         ;\n"
	"      .              .              ;%     ;;\n"
	"        ,           ,                :;%  %;\n"
	"         :         ;                   :;%;'     .,\n"
	",.        %;     %;            ;        %;'    ,;\n"
	"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
	"     `%;.     ;%;     %;'         `;%%;.%;'\n"
	"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
	"         `:%;.  :;bd%;          %;@%;'\n"
	"           `@%:.  :;%.         ;@@%;'\n"
	"             `@%.  `;@%.      ;@@%;\n"
	"               `@%%. `@%%    ;@@%;\n"
	"                 ;@%. :@%%  %@@%;\n"
	"                   %@bd%%%bd%%:;\n"
	"                     #@%%%%%:;;\n"
	"                     %@@%%%::;\n"
	"                     %@@@%(o);  . '\n"
	"                     %@@@o%;:(.,'\n"
	"                 `.. %@@@o%::;\n"
	"                    `)@@@o%::;\n"
	"                     %@@(o)::;\n"
	"                    .%@@@@%::;\n"
	"                    ;%@@@@%::;.\n"
	"                   ;%@@@@%%:;;;.\n"
	"               ...;%@@@@@%%:;;;;,..\n";
	if (!Form::getSign())
		throw Form::FormNotSignedException();
	if (Form::getExec_Grade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::string fileName = (this->_target + "_shrubbery");
	std::ofstream file(fileName.c_str());
    if (!file.is_open())
        throw ShrubberyCreationForm::FormNotSignedException();
	file << asciiTree << std::endl;
	file.close();
}