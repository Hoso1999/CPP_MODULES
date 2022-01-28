#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"


class Form;

class Bureaucrat
{
    Bureaucrat( void );
    const std::string name;
    int grade;
    public:
        Bureaucrat( const std::string&, int );
        Bureaucrat( const Bureaucrat& );
        virtual ~Bureaucrat();

        struct GradeTooHighException : std::exception
        {
            virtual const char *what( void ) const throw();
        };

        struct GradeTooLowException : std::exception
        {
            virtual const char *what( void ) const throw();
        };
        
        const std::string& getName( void ) const;
        int getGrade( void ) const;

        void increment( void );
        void decrement( void );

        void signForm( Form& ) const;
        void executeForm( Form const& );

        Bureaucrat& operator=( const Bureaucrat& );
};

    std::ostream& operator<<( std::ostream&, const Bureaucrat& );


#endif