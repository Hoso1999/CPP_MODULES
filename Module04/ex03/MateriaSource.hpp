#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Materia.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria* materia[4];
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource& );
        ~MateriaSource();

        void learnMateria( AMateria* );
        AMateria* createMateria( std::string const& );

        MateriaSource& operator=( const MateriaSource& );
};




#endif