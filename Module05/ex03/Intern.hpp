#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{

    public:
        Intern( void );
        ~Intern();
        Form* makeForm( const std::string, const std::string );
};



#endif