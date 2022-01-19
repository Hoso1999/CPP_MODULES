#include "mutantstack.hpp"


template<class T>
MutantStack<T>::MutantStack( void )
    : std::stack<T>()
{}

template<class T>
MutantStack<T>::MutantStack( const MutantStack& st )
    : std::stack<T>()
{
    *this = st;
}

template<class T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& st )
{
    if (this != &st)
        std::stack<T>::operator=(st);
    return *this;
}

template<class T>
MutantStack<T>::~MutantStack() {}

