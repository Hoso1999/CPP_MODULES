#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
    int num = std::rand() % 3;

    if (num == 0) return new A();
    if (num == 1) return new B();
    return new C();
}

void identify(Base* p)
{
    A* a_ptr = dynamic_cast<A*>(p);
    if (a_ptr == p)
    {
        std::cout << "Type is < A >" << std::endl;
        return ;
    }
    B* b_ptr = dynamic_cast<B*>(p);
    if (b_ptr == p)
    {
        std::cout << "Type is < B >" << std::endl;
        return ;
    }
    C* c_ptr = dynamic_cast<C*>(p);
    if (c_ptr == p)
        std::cout << "Type is < C >" << std::endl;
}

void identify(Base& p)
{
    identify(&p);
}