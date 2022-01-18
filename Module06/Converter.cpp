#include "Converter.hpp"

Converter::Converter( void )
    : type("Undefined"), literal("0")
{}

Converter::Converter( const Converter& converter )
{
    *this = converter;
}

Converter& Converter::operator=( const Converter& converter )
{
    if (this != &converter)
    {
        type = converter.type;
        literal = converter.literal;
    }
    return *this;
}

void Converter::check( void )
{
    std::string literals[8] = {
        "inff",
        "+inff",
        "-inff",
        "nanf",
        "inf",
        "-inf",
        "+inf",
        "nan"
    };
    if (literal.length() == 1)
        return ;
    for (size_t i = 0; i < 8; i++)
    {
        if (literal == literals[i])
            return ;
    }
    
    size_t floating_point = literal.find('.');
    if (floating_point != std::string::npos)
    {
        std::string int_num(literal);
        std::string float_num(literal);
        int_num.erase(floating_point);    
        float_num.erase(0, floating_point + 1);
        for (size_t i = 0; i < int_num.length(); ++i)
        {
           if (int_num.at(i) < '0' || int_num.at(i) > '9')
           {
                type = "undefined";
                return ;
           }
        }
        for (size_t i = 0; i < float_num.length(); ++i)
        {
           if ((float_num.at(i) < '0' || float_num.at(i) > '9') && float_num.at(float_num.length() - 1) != 'f')
           {
                type = "undefined";
                return ;
           }
        }
    }
    else
    {
        for (size_t i = 0; i < literal.length(); ++i)
        {
            if ((literal.at(i) < '0' || literal.at(i) > '9') && literal.at(literal.length() - 1) != 'f')
            {
                type = "undefined";
                return ;
            }
        }
        
    }
    
}

void Converter::findType( const std::string& literal )
{
    this->literal = literal;
    if (literal == "inf" || literal == "+inf" || literal == "-inf" || literal == "nan")
        type = "double";
    else if (literal == "inff" || literal == "+inff" || literal == "-inff" || literal == "nanf")
        type = "float";
    else if (literal.length() >= 2 && literal.at(literal.length() - 1) == 'f')
        type = "float";
    else if (literal.length() >= 2 && literal.find('.') != std::string::npos)
        type = "double";
    else if (literal.length() == 1)
    {
        char c = literal.at(0);
        if (c >= '0' && c <= '9')
            type = "int";
        else if (c >= 0 && c <= 127)
            type = "char";
        else
            type = "undefined";
    }
    else
        type = "int";
    check();
}

void Converter::print( int num ) const
{
    std::cout << "char: ";
    if (num < 0 || num > 127)
        std::cout << "impossible" << std::endl;
    else if (num >= 0 && num < 32)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(num) << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void Converter::print( char c ) const
{
    std::cout << "char: ";
    if (c >= 0 && c < 32)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Converter::print( float num ) const
{
    if (literal == "nan" || literal == "inf" || literal == "+inf" || literal == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        std::cout << "char: ";
        if (num < 0f || num > 127)
    
    }
    // std::cout << "char: ";
    // if (num >= 0 && num < 32)
    //     std::cout << "Non displayable" << std::endl;
    // else
    //     std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
    // std::cout << "int: " << static_cast<int>(num) << std::endl;
    // std::cout << "float: " << static_cast<float>(num) << std::endl;
    // std::cout << "double: " << static_cast<double>(num) << std::endl;
}


void Converter::print( void ) const
{
    if (type == "char")
    {
        char c = literal.at(0);
        print(c);
    }
    else if (type == "int")
    {
        int num = std::stoi(literal);
        print(num);
    }
    else if (type == "float")
    {
        float num = std::stof(literal);
        print(num);
    }
    else if (type == "double")
    {
        double num = std::stod(literal);
        print(num);
    }
    else
        print("impossible");
}

void Converter::print( const std::string& ) const
{

}

Converter::Converter( const std::string& literal )
{
    this->literal = literal;
    findType(literal);
}

const std::string& Converter::getType( void ) const
{
    return type;
}

Converter::~Converter() {}
