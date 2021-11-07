#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        //  getters
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNUmber();
        std::string getDarkestSecret();
        //  setters
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickName(std::string);
        void setPhoneNUmber(std::string);
        void setDarkestSecret(std::string);

        Contact();
        Contact(std::string, std::string, std::string, std::string, std::string);
};




#endif