#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
    private:
    int     top;
    Contact contacts[8];
    public:
        PhoneBook();
        void add(Contact contact);
        void print();
};


#endif