#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
    : Form("Presidential Pardon", 25, 5), target("presidential_pardon")
{}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
    : Form("Presidential Pardon", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& p )
    : Form("Presidential Pardon", 25, 5)
{
    *this = p;
}

const std::string& PresidentialPardonForm::getTarget( void ) const
{
    return target;
}

void PresidentialPardonForm::execute( Bureaucrat const& b ) const
{
    if (!isSigned())
        throw Form::NotSignedException();
    if (executeGrade < b.getGrade())
        throw Form::GradeTooLowException();
    std::cout << "< " << target << " >  has been ";
    std::cout << "pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& p )
{
    if (this != &p)
        target = p.target;
    return *this;
}