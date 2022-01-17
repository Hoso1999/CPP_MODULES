#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    Bureaucrat( void );
    const std::string name;
    int grade;
    public:
        Bureaucrat( const std::string&, int );
        Bureaucrat( const Bureaucrat& );
        ~Bureaucrat();

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

        Bureaucrat& operator=( const Bureaucrat& );
};

    std::ostream& operator<<( std::ostream&, const Bureaucrat& );


#endif