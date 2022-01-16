#ifndef FORM_HPP
#define FORM_HPP

#include "Beruaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Beuraucrat;

class Form
{
    Form( void );
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

        const std::string& getName( void ) const;
        int getSignGrade( void ) const;
        int getExecuteGrade( void ) const;
        bool isSigned( void ) const;

        void beSigned( const Beuraucrat& );

        Form& operator=( const Form& );
        
};

    std::ostream& operator<<(std::ostream &, const Form& );

#endif