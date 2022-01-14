#ifndef BEURAUCRAT_HPP
#define BEURAUCRAT_HPP

#include <iostream>
#include <string>

class Beuraucrat
{
    const std::string name;
    int grade;
    public:
        Beuraucrat( int );
        ~Beuraucrat();

        static const std::string GradeTooHighException( void );
        static const std::string GradeTooLowException( void );

        const std::string& getName( void ) const;
        int getGrade( void ) const;

        void increment( void );
        void decrement( void );
};

    std::ostream& operator<<(std::ostream &, const Beuraucrat& );


#endif