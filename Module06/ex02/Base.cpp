#include "Base.hpp"

Base::~Base() {}

Base::Base( void ) {}

Base::Base( const Base& ) {}

Base& Base::operator=( const Base& b )
{
    if (this != &b)
        Base();
    return *this;
}

A::~A() {}

A::A( void ) {}

A::A( const A& ) {}

A& A::operator=( const A& a )
{
    if (this != &a)
        A();
    return *this;
}

B::~B() {}

B::B( void ) {}

B::B( const B& ) {}

B& B::operator=( const B& b )
{
    if (this != &b)
        B();
    return *this;
}

C::~C() {}

C::C( void ) {}

C::C( const C& ) {}

C& C::operator=( const C& c )
{
    if (this != &c)
        C();
    return *this;
}

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