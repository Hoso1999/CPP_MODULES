#include "Beruaucrat.hpp"

Beuraucrat::Beuraucrat( int grade)
    : name("Beuraucrat")
{
    if (grade > 150)
        throw Beuraucrat::GradeTooLowException();
    if (grade < 1)
        throw Beuraucrat::GradeTooHighException();
    this->grade = grade;
}

const std::string Beuraucrat::GradeTooHighException( void )
{
    return "Grade is too high";
}

const std::string Beuraucrat::GradeTooLowException( void )
{
    return "Grade is too low";
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