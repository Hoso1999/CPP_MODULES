
#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack( " << target << " )" << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack( " << target << " )" << std::endl;
}

void Human::intimidatingShout( std::string const& target )
{
	std::cout << "intimidatingShout( " << target << " )" << std::endl;
}

void Human::action( std::string const& action_name, std::string const& target )
{
	void (Human::* const actions[3])(std::string const& ) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	int index = ("meleeAttack" == action_name) ? 0 :
			("rangedAttack" == action_name) ? 1 :
			("intimidatingShout" == action_name) ? 2
			: throw "Action not found.";
	(this->*actions[index])(target);
}