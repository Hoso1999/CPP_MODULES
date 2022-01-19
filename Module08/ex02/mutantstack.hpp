#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>

template<class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        MutantStack( void );
        MutantStack( const MutantStack& );
        virtual ~MutantStack();

        MutantStack& operator=( const MutantStack& );

        iterator end( void )
        {
            return this->c.end();
        }

        iterator begin( void )
        {
            return this->c.begin();
        }
};

#include "mutantstack.ipp"

#endif