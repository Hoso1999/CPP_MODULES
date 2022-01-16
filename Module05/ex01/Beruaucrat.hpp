#ifndef BEURAUCRAT_HPP
#define BEURAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"


class Form;

class Beuraucrat
{
    Beuraucrat( void );
    const std::string name;
    int grade;
    public:
        Beuraucrat( const std::string&, int );
        Beuraucrat( const Beuraucrat& );
        virtual ~Beuraucrat();

        struct GradeTooHighException : std::exception
        {
            const char *what( void ) const throw();
        };

        struct GradeTooLowException : std::exception
        {
            const char *what( void ) const throw();
        };
        
        const std::string& getName( void ) const;
        int getGrade( void ) const;

        void increment( void );
        void decrement( void );

        void signForm( Form& ) const;

        Beuraucrat& operator=( const Beuraucrat& );
};

    std::ostream& operator<<(std::ostream &, const Beuraucrat& );


#endif