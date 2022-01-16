#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
    for (size_t i = 0; i < 4; ++i)
        materia[i] = nullptr;
}

MateriaSource::MateriaSource( const MateriaSource& materiaSource )
{
    *this = materiaSource;
}

void MateriaSource::learnMateria( AMateria* materia )
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
    for (size_t i = 0; i < 4; ++i)
       if (!isEmpty && this->materia[i] && this->materia[i]->getType() == materia->getType()) return ;
    this->materia[index] = materia;
    ++index;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& materiaSource )
{
    if (this != &materiaSource)
    {
        for (size_t i = 0; i < 4; ++i)
        {
            if (materia[i])
                delete materia[i];
            materia[i] = nullptr;
        }
        for (size_t i = 0; i < 4; ++i)
            materia[i] = materiaSource.materia[i];
    }
    return *this;
}

AMateria* MateriaSource::createMateria( std::string const& type )
{
    AMateria *current = nullptr;

    for (size_t i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            current = materia[i];
    }
    if (!current) return nullptr;
    return current->clone();
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; ++i)
        if (materia[i])
            delete materia[i];
}