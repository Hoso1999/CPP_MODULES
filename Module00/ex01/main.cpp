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
        std::cout << "CMD$> ";
        std::cin >> cmd;
        if (cmd == "EXIT" || cmd == "")
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
            while (true)
            {
                std::cout << "Enter contact index: ";
                std::cin >> index;
                if (std::cin.fail())
                {
                    std::cout << "Contact index must be number" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                }
                else
                    break ;
            }
            phonebook.print(index);
        }
        else
            std::cout << "Wrong command" << std::endl;
    }
    
}