#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
    : top(-1)
{
}

void PhoneBook::add(Contact contact)
{
    ++this->top;
    if (this->top > 7)
        this->top = 7;
    this->contacts[this->top].setFirstName(contact.getFirstName());
    this->contacts[this->top].setLastName(contact.getLastName());
    this->contacts[this->top].setNickName(contact.getNickName());
    this->contacts[this->top].setPhoneNUmber(contact.getPhoneNUmber());
    this->contacts[this->top].setDarkestSecret(contact.getDarkestSecret());
}

void PhoneBook::print()
{
    std::cout << std::setfill(' ') << "index" << std::setw(10) << "first name" << std::setw(10) << "last name" << std::setw(10) << "nickname" << std::endl;
    // for (size_t i = 0; i < this->top; ++i)
    //     std::cout << i << std::setw(10) << this->contacts[i].getFirstName() << std::setw(10) << this->contacts[i].getLastName() << std::setw(10) << this->contacts[i].getNickName() << std::endl;
}