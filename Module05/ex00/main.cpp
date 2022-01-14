#include "Beruaucrat.hpp"


int main()
{
    try
    {
        Beuraucrat b(1);
        Beuraucrat b1(150);

        std::cout << b << std::endl;
        std::cout << b1 << std::endl;
        // Beuraucrat b1(0); // Beuraucrat::GradeTooHighException()
        Beuraucrat b2(151); // Beuraucrat::GradeTooLowException()
    }
    catch( const std::string& e )
    {
        std::cerr << e << std::endl;
    }
    
    return 0;
}
