#include <iostream>
#include "Base.hpp"

int main()
{
    srand(time(nullptr));
    Base *ptr = generate();
    Base &ref = *generate();
    identify(ptr);
    identify(ref);

    delete ptr;
    return 0;
}