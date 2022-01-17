#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
    Form( void );
    protected:
        const std::string name;
        const int signGrade;
        const int executeGrade;
        bool _signed;
    public:
        Form( const std::string&, const int, const int );
        Form( const Form& );
        virtual ~Form();

        struct GradeTooHighException : std::exception
        {
            const char* what( void ) const throw();
        };

        struct GradeTooLowException : std::exception
        {
            const char* what( void ) const throw();
        };

        struct AlreadySignedException : std::exception
        {
            const char *what( void ) const throw();
        };

        struct NotSignedException : std::exception
        {
            const char *what( void ) const throw();
        };

        const std::string& getName( void ) const;
        int getSignGrade( void ) const;
        int getExecuteGrade( void ) const;
        bool isSigned( void ) const;

        void beSigned( const Bureaucrat& );

        Form& operator=( const Form& );
        virtual void execute( Bureaucrat const& ) const = 0;
        
};

    std::ostream& operator<<( std::ostream&, const Form& );

#endif