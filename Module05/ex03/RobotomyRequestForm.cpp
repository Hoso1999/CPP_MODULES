#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
    : Form("robotomy request", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( void )
    : Form("robotomy request", 72, 45), target("robo_request")
{}


RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& robo )
    : Form("robotomy request", 72, 45)
{
    *this = robo;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& robo )
{
    if (this != &robo)
        target = robo.target;
    return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const& b ) const
{
    int num = rand() % 100;
    if (!isSigned())
        throw Form::NotSignedException();
    if (executeGrade < b.getGrade())
        throw Form::GradeTooLowException();
    if (num % 2)
    {
        std::cout << "< " << target;
        std::cout << " > has been robotomized successfully 50% of the time.";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "< " << target;
        std::cout << " > has not been robotomized.";
        std::cout << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget( void ) const
{
    return target;
}

