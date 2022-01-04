#include "PhoneBook.hpp"

Contact getContact()
{
    Contact contact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    std::cout << "First Name: " << std::endl;
    std::getline(std::cin, firstName);
    std::cout << "Last Name: " << std::endl;
    std::getline(std::cin, lastName);
    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, nickName);
    std::cout << "Phone Number: " << std::endl;
    std::cin >> phoneNumber;
    std::cout << "Darkest Secret: " << std::endl;
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
        std::cout << "Enter the command: " << std::endl;
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
            int index;

            phonebook.print();
            std::cout << "Enter contact index: " << std::endl;
            std::cin >> index;
            phonebook.print(index);
        }
        else
            std::cout << "Wrong command" << std::endl;
    }
    
}