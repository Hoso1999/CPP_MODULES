#include "Beruaucrat.hpp"

Beuraucrat::Beuraucrat( const std::string& name, int grade)
    : name(name), grade(grade)
{
    if (grade > 150)
        throw Beuraucrat::GradeTooLowException();
    if (grade < 1)
        throw Beuraucrat::GradeTooHighException();
    this->grade = grade;
}

Beuraucrat::Beuraucrat( void )
    : name("Beuraucrat"), grade(1)
{}

Beuraucrat::Beuraucrat( const Beuraucrat& beuraucrat )
    : name(beuraucrat.name)
{
    *this = beuraucrat;
}

Beuraucrat& Beuraucrat::operator=( const Beuraucrat& beuraucrat )
{
    if (this != &beuraucrat)
        grade = beuraucrat.grade;
    return *this;
}

const char* Beuraucrat::GradeTooHighException::what( void ) const throw()
{
    return "BeuraucException: Grade is too high";
}

const char* Beuraucrat::GradeTooLowException::what( void ) const throw()
{
    return "BeuraucException: Grade is too low";
}

void Beuraucrat::increment( void )
{
    if (this->grade + 1 > 150)
        throw Beuraucrat::GradeTooLowException();
    ++this->grade;
}

void Beuraucrat::decrement( void )
{
    if (this->grade - 1 < 1)
        throw Beuraucrat::GradeTooHighException();
    --this->grade;
}

const std::string& Beuraucrat::getName( void ) const
{
    return name;
}

int Beuraucrat::getGrade( void ) const
{
    return grade;
}

std::ostream& operator<<(std::ostream &os, const Beuraucrat& b)
{
    os << "< " << b.getName() << " >, bureaucrat grade < ";
    os << b.getGrade() << " >";
    return os;
}


Beuraucrat::~Beuraucrat() {}