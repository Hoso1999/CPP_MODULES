#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde z(5);
    ZombieHorde z1(10);
    std::cout << "size: " << z.size() << std::endl;
    z.announce();
    std::cout << "size: " << z1.size() << std::endl;
    z1.announce();

    return 0;
}