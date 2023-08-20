#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public :

        // DEfault Constructor.
        Ice();

        // Copy Constructor.
        Ice(const Ice& other);

        // Copy assignement operator.
        Ice& operator=(const Ice& other);

        // Member Functions.
        AMateria* clone() const;
        void use(ICharacter& target);

        // Default Destractor.
        ~Ice() {}
};
#endif