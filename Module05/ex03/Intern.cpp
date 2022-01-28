#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( const Intern& i )
{
    *this = i;
}

Intern& Intern::operator=( const Intern& i )
{
    if (this != &i)
        Intern();
    return *this;
}

Form* Intern::makeForm( const std::string dest, const std::string target )
{
    ShrubberyCreationForm sform(target);
    RobotomyRequestForm robo(target);
    PresidentialPardonForm pres(target);

    Form* forms[3] = {&sform, &robo, &pres};

    int index = ("shrubbery creation" == dest) ? 0 :
			("robotomy request" == dest) ? 1 :
			("presidential pardon" == dest) ? 2
			: throw "Action not found.";
    std::cout << "Intern creates < " << forms[index]->getName();
    std::cout << " >" << std::endl;
    return forms[index]->copy();
}

Intern::~Intern() {}