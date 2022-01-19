#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
    : Form("Shrubbery Creation", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( void )
    : Form("Shrubbery Creation", 145, 137), target("None")
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& sform )
    : Form("Shrubbery Creation", 145, 137)
{
    *this = sform;
}

Form* ShrubberyCreationForm::copy( void ) const
{
    return new ShrubberyCreationForm(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& sform )
{
    if (this != &sform)
        target = sform.target;
    return *this;
}

const std::string& ShrubberyCreationForm::getTarget( void ) const
{
    return target;
}

void ShrubberyCreationForm::execute( Bureaucrat const& b ) const
{
    if (!isSigned())
        throw Form::NotSignedException();
    if (getExecuteGrade() < b.getGrade())
        throw Form::GradeTooLowException();
    
    std::fstream out;

    out.open(target + "_shrubbery", std::fstream::out | std::fstream::trunc);

    out << "\t\t *" << std::endl << "\t\t/|\\" << std::endl << "\t   /*|O\\" << std::endl << "\t  /*/|\\*\\" << std::endl;
    out << "\t /X/O|*\\X\\" << std::endl << "\t/*/X/|\\X\\*\\" << std::endl;
    out << "   /O/*/X|*\\O\\X\\" << std::endl << "  /*/O/X/|\\X\\O\\*\\" << std::endl;
    out << " /X/O/*/X|O\\X\\*\\O\\" << std::endl << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
    out << "\t\t|X|" << std::endl << "\t\t|X|" << std::endl;

    out.close();
}





