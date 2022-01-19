#include "Human.hpp"

int main()
{
    Human h;

    try
    {
        h.action("meleeAttack", "action");
        h.action("rangedAttack", "action");
        h.action("intimidatingShout", "action");
        h.action("myfunc", "action");
    }
    catch(const char* e)
    {
        std::cerr << e << std::endl;
    }
}