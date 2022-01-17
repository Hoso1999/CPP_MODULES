#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>

class Human
{
    void meleeAttack( std::string const& );
    void rangedAttack( std::string const& );
    void intimidatingShout( std::string const& );
    public:
        void action( std::string const&, std::string const& );
};

#endif