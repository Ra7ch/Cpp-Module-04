#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public :

        // DEfault Constructor.
        Cure();

        // Copy Constructor.
        Cure(const Cure& other);

        // Copy assignement operator.
        Cure& operator=(const Cure& other);

        // Member Functions.
        AMateria* clone() const;
        void use(ICharacter& target);

        // Default Destractor.
        ~Cure() {}
};

#endif