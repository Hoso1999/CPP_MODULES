#include "Contact.hpp"

Contact::Contact( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret )
   : firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{

}

Contact::Contact()
   : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("")
{

}

std::string Contact::getFirstName( void )
{
   return this->firstName;
}

std::string Contact::getLastName( void )
{
   return this->lastName;
}

std::string Contact::getNickName( void )
{
   return this->nickName;
}

std::string Contact::getPhoneNUmber( void )
{
   return this->phoneNumber;
}

std::string Contact::getDarkestSecret( void )
{
   return this->darkestSecret;
}

void Contact::setFirstName( std::string firstName )
{
   this->firstName = firstName;
}

void Contact::setLastName( std::string lastName )
{
   this->lastName = lastName;
}

void Contact::setNickName( std::string nickName )
{
   this->nickName = nickName;
}

void Contact::setPhoneNUmber( std::string phoneNumber )
{
   this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret( std::string darkestSecret )
{
   this->darkestSecret = darkestSecret;
}