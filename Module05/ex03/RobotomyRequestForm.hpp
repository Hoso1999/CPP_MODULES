#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form
{
    RobotomyRequestForm( void );
    std::string target;
    public:
        RobotomyRequestForm( const std::string& );
        RobotomyRequestForm( const RobotomyRequestForm& );
        ~RobotomyRequestForm();

        const std::string& getTarget( void ) const;

        void execute( Bureaucrat const& ) const;
        Form* copy( void ) const;

        RobotomyRequestForm& operator=( const RobotomyRequestForm& );
};



#endif