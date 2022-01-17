#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b("a", 1);
        Bureaucrat b1("b", 150);

        std::cout << b << std::endl;
        std::cout << b1 << std::endl;
        // Bureaucrat b3("invalid", 0); // Bureaucrat::GradeTooHighException()
        Bureaucrat b2("invalid", 151); // Bureaucrat::GradeTooLowException()
    }
    catch( Bureaucrat::GradeTooHighException& e )
    {
        std::cerr << e.what() << std::endl;
    }
    catch( Bureaucrat::GradeTooLowException& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
