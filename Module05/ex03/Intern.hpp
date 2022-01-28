#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

    public:
        Intern( void );
        Intern( const Intern& );
        ~Intern();

        Form* makeForm( const std::string, const std::string );

        Intern& operator=( const Intern& );
};



#endif