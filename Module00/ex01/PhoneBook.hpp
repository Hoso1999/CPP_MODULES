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
        PhoneBook();
        void add(Contact contact);
        void print();
        void print(int);
};


#endif