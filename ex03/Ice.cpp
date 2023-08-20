#include "Ice.hpp"

// Default Constructor.
Ice::Ice() : AMateria("ice") {}

// Copy Constructor.
Ice::Ice (const Ice& other) : AMateria(other) {}

// Copy assignement operator.
Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

// Member Functions.

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
