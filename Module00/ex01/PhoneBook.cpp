#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
    : top(-1)
{
}
int PhoneBook::size()
{
    return this->top + 1;
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
    std::cout << std::setfill(' ') << std::setw(13) << "index | ";
    std::cout << std::setfill(' ') << std::setw(13) << "first name | ";
    std::cout << std::setfill(' ') << std::setw(13) << "last name | ";
    std::cout << std::setfill(' ') << std::setw(13) << "nickname   ";
    std::cout << std::endl;

    for (size_t i = 0; (int)i < this->top + 1; ++i)
    {
        std::string firstName = this->contacts[i].getFirstName();
        std::string lastName = this->contacts[i].getLastName();
        std::string nickName = this->contacts[i].getNickName();
        if (firstName.size() > 10)
        {
            firstName.erase(8, firstName.size() - 9);
            firstName += ".";
        }
        if (lastName.size() > 10)
        {
            lastName.erase(8, lastName.size() - 9);
            lastName += ".";
        }
        if (nickName.size() > 10)
        {
            nickName.erase(8, nickName.size() - 9);
            nickName += ".";
        }
        std::cout << std::right;
        std::cout << std::setfill(' ') << std::setw(10) << i << " | ";
        std::cout << std::right;
        std::cout << std::setfill(' ') << std::setw(10) << firstName << " | ";
        std::cout << std::right;
        std::cout << std::setfill(' ') << std::setw(10) << lastName << " | ";
        std::cout << std::right;
        std::cout << std::setfill(' ') << std::setw(10) << nickName << "   ";
        std::cout << std::endl;
    }
}

void PhoneBook::print(int index)
{
    if (index > this->top)
        return ;
    std::string firstName = this->contacts[index].getFirstName();
    std::string lastName = this->contacts[index].getLastName();
    std::string nickName = this->contacts[index].getNickName();
    if (firstName.size() > 10)
    {
        firstName.erase(8, firstName.size() - 9);
        firstName += ".";
    }
    if (lastName.size() > 10)
    {
        lastName.erase(8, lastName.size() - 9);
        lastName += ".";
    }
    if (nickName.size() > 10)
    {
        nickName.erase(8, nickName.size() - 9);
        nickName += ".";
    }
    std::cout << std::setfill(' ') << std::setw(13) << "index | ";
    std::cout << std::setfill(' ') << std::setw(13) << "first name | ";
    std::cout << std::setfill(' ') << std::setw(13) << "last name | ";
    std::cout << std::setfill(' ') << std::setw(13) << "nickname   ";
    std::cout << std::endl;

    std::cout << std::right;
    std::cout << std::setfill(' ') << std::setw(10) << index << " | ";
    std::cout << std::right;
    std::cout << std::setfill(' ') << std::setw(10) << firstName << " | ";
    std::cout << std::right;
    std::cout << std::setfill(' ') << std::setw(10) << lastName << " | ";
    std::cout << std::right;
    std::cout << std::setfill(' ') << std::setw(10) << nickName << "   ";
    std::cout << std::endl;
}