#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
    int     top;
    Contact contacts[8];
    public:
        PhoneBook( void );
        void add( Contact );
        void print( void );
        void print( int );
        int size( void );
};


#endif