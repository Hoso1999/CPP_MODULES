#include "Character.hpp"

Character::Character( void )
    : name("Character")
{
    for (size_t i = 0; i < 4; i++)
        materia[i] = nullptr;
}

Character::Character(const std::string& name )
    : name(name)
{
    for (size_t i = 0; i < 4; i++)
        materia[i] = nullptr;
}

std::string const& Character::getName( void ) const
{
    return name;
}

void Character::use( int index, ICharacter& character )
{
    if (index > 3 || index < 0 || !materia[index]) return ;
    // std::cout << "materia ice: " <<  materia[index]->getType() << std::endl;
    materia[index]->use(character);
}

Character::Character( const Character& character )
{
    *this = character;
}

Character& Character::operator=( const Character& character )
{
    for (size_t i = 0; i < 4; ++i)
    {
        if (materia[i])
        {
            delete materia[i];
            materia[i] = nullptr;
        }
    }
    for (size_t i = 0; i < 4; i++)
        materia[i] = character.materia[i];
    return *this;
}

void Character::equip( AMateria* materia )
{
    static int index = 0;
    bool isEmpty = true;
    if (!materia || index > 3) return ;
    for (size_t i = 0; i < 4; ++i)
    {
        if (this->materia[i])
        {
            isEmpty = false;
            break ;
        }
    }
    for (size_t i = 0; i < 4; i++)
        if (!isEmpty && this->materia[i] && this->materia[i]->getType() == materia->getType()) return ;
    this->materia[index] = materia;
    ++index;
}

void Character::unequip( int index )
{
    if (index < 0 || index > 3) return ;
    materia[index] = nullptr;
    if (index != 3)
    {
        AMateria *tmp = materia[index];
        materia[index] = materia[3];
        materia[3] = tmp;
    }
}

Character::~Character()
{
    for (size_t i = 0; i < 4; ++i)
        if (materia[i])
            delete materia[i];
}

