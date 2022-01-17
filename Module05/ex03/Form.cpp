#include "Form.hpp"

Form::Form( void )
    : name("Form"), signGrade(50), executeGrade(30), _signed(false)
{}

Form::Form( const Form& form )
    : name(form.name), signGrade(form.signGrade), executeGrade(form.executeGrade), _signed(form._signed)
{}

Form& Form::operator=( const Form& form )
{
    if (this != &form)
        _signed = form._signed;
    return *this;
}

Form::Form( const std::string& name, const int signGrade, const int executeGrade )
    : name(name), signGrade(signGrade), executeGrade(executeGrade), _signed(false)
{
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
    return "FormException: Grade is too high";
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
    return "FormException: Grade is too low";
}

const char* Form::AlreadySignedException::what( void ) const throw()
{
    return "FormException: form already signed";
}

const char* Form::NotSignedException::what( void ) const throw()
{
    return "FormException: form not signed";
}

void Form::beSigned( const Bureaucrat& bureaucrat )
{
    if (_signed)
        throw Form::AlreadySignedException();
    if (bureaucrat.getGrade() > signGrade)
        throw Form::GradeTooLowException();
    _signed = true;
}

const std::string& Form::getName( void ) const
{
    return name;
}

int Form::getSignGrade( void ) const
{
    return signGrade;
}
int Form::getExecuteGrade( void ) const
{
    return executeGrade;
}

bool Form::isSigned( void ) const
{
    return _signed;
}

std::ostream& operator<<( std::ostream& os, const Form& form )
{
    os << "< " << form.getName() << " > < " << form.getSignGrade();
    std::cout << ", " << form.getExecuteGrade() << " > is";
    if (!form.isSigned())
        os << " not";
    os << " signed" << std::endl;
    return os;
}


Form::~Form() {}