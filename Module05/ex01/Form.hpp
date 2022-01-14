#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Form
{
    const std::string name;
    const int grade;
    bool isSigned;
    public:
        Form( void );
        static const std::string GradeTooHighException( void );
        static const std::string GradeTooLowException( void );
        ~Form();
};



#endif