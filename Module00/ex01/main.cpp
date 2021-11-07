#include "PhoneBook.hpp"

Contact getContact()
{
    Contact contact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
    std::cout << "Nickname: ";
    std::cin >> nickName;
    std::cout << "Phone Number: ";
    std::cin >> phoneNumber;
    std::cout << "Darkest Secret: ";
    std::cin >> darkestSecret;
    contact.setFirstName(firstName);
    contact.setLastName(lastName);
    contact.setNickName(nickName);
    contact.setPhoneNUmber(phoneNumber);
    contact.setDarkestSecret(darkestSecret);
    return contact;
}

int main()
{
    PhoneBook   phonebook;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter the command: ";
        std::cin >> cmd;
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD")
        {
            Contact contact;
            contact = getContact();
            phonebook.add(contact);
        }
        else if (cmd == "SEARCH")
        {
            phonebook.print();
        }
    }
    
}