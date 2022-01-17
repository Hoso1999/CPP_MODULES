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

Bureaucrat::Bureaucrat( const Bureaucrat& Bureaucrat )
    : name(Bureaucrat.name)
{
    *this = Bureaucrat;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& Bureaucrat )
{
    if (this != &Bureaucrat)
        grade = Bureaucrat.grade;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return "BeuraucException: Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return "BeuraucException: Grade is too low";
}

void Bureaucrat::increment( void )
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    ++this->grade;
}

void Bureaucrat::decrement( void )
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    --this->grade;
}

const std::string& Bureaucrat::getName( void ) const
{
    return name;
}

int Bureaucrat::getGrade( void ) const
{
    return grade;
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& b)
{
    os << "< " << b.getName() << " >, bureaucrat grade < ";
    os << b.getGrade() << " >";
    return os;
}


Bureaucrat::~Bureaucrat() {}