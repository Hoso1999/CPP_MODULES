#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
   : firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{

}

Contact::Contact()
   : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("")
{

}

std::string Contact::getFirstName()
{
   return this->firstName;
}

std::string Contact::getLastName()
{
   return this->lastName;
}

std::string Contact::getNickName()
{
   return this->nickName;
}

std::string Contact::getPhoneNUmber()
{
   return this->phoneNumber;
}

std::string Contact::getDarkestSecret()
{
   return this->darkestSecret;
}

void Contact::setFirstName(std::string firstName)
{
   this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
   this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
   this->nickName = nickName;
}

void Contact::setPhoneNUmber(std::string phoneNumber)
{
   this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
   this->darkestSecret = darkestSecret;
}