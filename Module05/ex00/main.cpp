#include "Beruaucrat.hpp"


int main()
{
    try
    {
        Beuraucrat b("a", 1);
        Beuraucrat b1("b", 150);

        std::cout << b << std::endl;
        std::cout << b1 << std::endl;
        // Beuraucrat b3("invalid", 0); // Beuraucrat::GradeTooHighException()
        Beuraucrat b2("invalid", 151); // Beuraucrat::GradeTooLowException()
    }
    catch( Beuraucrat::GradeTooHighException& e )
    {
        std::cerr << e.what() << std::endl;
    }
    catch( Beuraucrat::GradeTooLowException& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
