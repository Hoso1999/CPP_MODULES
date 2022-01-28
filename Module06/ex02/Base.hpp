#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
        Base( void );
        Base( const Base& );

        Base& operator=( const Base& );
};

class A : public Base
{
    public:
        virtual ~A();
        A( void );
        A( const A& );

        A& operator=( const A& );
};

class B : public Base
{
    public:
        virtual ~B();
        B( void );
        B( const B& );

        B& operator=( const B& );
    };

class C : public Base
{
    public:
        virtual ~C();
        C( void );
        C( const C& );

        C& operator=( const C& );
};

Base * generate( void );

void identify( Base* p );

void identify( Base& p );



#endif