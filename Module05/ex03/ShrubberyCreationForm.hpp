#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <ctime>

class ShrubberyCreationForm : public Form
{
    ShrubberyCreationForm( void );
    std::string target;
    public:
        ShrubberyCreationForm( const std::string& );
        ShrubberyCreationForm( const ShrubberyCreationForm& );
        ~ShrubberyCreationForm();

        void execute( Bureaucrat const& ) const;

        const std::string& getTarget( void ) const;

        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
};



#endif