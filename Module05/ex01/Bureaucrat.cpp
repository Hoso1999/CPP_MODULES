#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string& name, int grade)
    : name(name), grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat( void )
    : name("Bureaucrat"), grade(1)
{}

Bureaucrat::Bureaucrat( const Bureaucrat& bureaucrat )
    : name(bureaucrat.name)
{
    *this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& bureaucrat )
{
    if (this != &bureaucrat)
        grade = bureaucrat.grade;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return "BureaucratException: Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return "BureaucratException: Grade is too low";
}

void Bureaucrat::increment( void )
{
    ++this->grade;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement( void )
{
    --this->grade;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

const std::string& Bureaucrat::getName( void ) const
{
    return name;
}

int Bureaucrat::getGrade( void ) const
{
    return grade;
}

void Bureaucrat::signForm( Form& form ) const
{
    try
    {
        form.beSigned(*this);
        std::cout << "< " << name << " > signs < ";
        std::cout << form.getName() << " >.";
    }
    catch(Form::GradeTooHighException& e)
    {
        std::cout << "< " << name << " > cannot sign < " << form.getName();
        std::cout << " > because < " << e.what() << " >.";
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cout << "< " << name << " > cannot sign < " << form.getName();
        std::cout << " > because < " << e.what() << " >.";
    }
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& b)
{
    os << "< " << b.getName() << " >, bureaucrat grade < ";
    os << b.getGrade() << " >";
    return os;
}


Bureaucrat::~Bureaucrat() {}