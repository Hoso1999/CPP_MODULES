#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    PresidentialPardonForm( void );
    std::string target;
    public:
        PresidentialPardonForm( const std::string& );
        PresidentialPardonForm( const PresidentialPardonForm& );
        ~PresidentialPardonForm();

        const std::string& getTarget( void ) const;

        void execute( Bureaucrat const& ) const;

        PresidentialPardonForm& operator=( const PresidentialPardonForm& );
};



#endif