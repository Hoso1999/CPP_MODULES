#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    public:
        //  getters
        std::string getFirstName( void );
        std::string getLastName( void );
        std::string getNickName( void );
        std::string getPhoneNUmber( void );
        std::string getDarkestSecret( void );
        //  setters
        void setFirstName( std::string );
        void setLastName( std::string );
        void setNickName( std::string );
        void setPhoneNUmber( std::string );
        void setDarkestSecret( std::string );

        Contact();
        Contact( std::string, std::string, std::string, std::string, std::string );
};




#endif