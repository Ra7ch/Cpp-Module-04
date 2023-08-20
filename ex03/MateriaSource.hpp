#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *sources[4];
        int learned;

    public:
        // DEfault Constructor.
        MateriaSource();

        // Copy Constructor.
        MateriaSource(const MateriaSource &other);

        // Copy assignement operator.
        MateriaSource &operator=(const MateriaSource &other);

        // Member Functions.
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);

        // Default Destractor.
        ~MateriaSource();
};

#endif