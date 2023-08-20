#include "AMateria.hpp"

// Default Constructor.
AMateria::AMateria (const std::string& _type) : type (_type) {}

// Copy Constructor
AMateria::AMateria (const AMateria& other) : type(other.type) {}

// Copy assignement operator.
AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

// Member Functions.
std::string const& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << getType() << ": * uses on " << target.getName() << " *" << std::endl;
}

// Default Destructor.
AMateria::~AMateria() {}