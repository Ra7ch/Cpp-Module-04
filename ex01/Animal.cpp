#include "Animal.hpp"

Animal::Animal() : type("Animal") { std::cout << "Animal default Constructor called." << std::endl; }

// Animal Construtor for specific breed
Animal::Animal(const std::string &breed) : type(breed) { std::cout << "Animal Constructor called for " << type << "." << std::endl; }

// Animal copy constructor.
Animal::Animal(const Animal &other) : type(other.type) { std::cout << "Animal copy constructor called." << std::endl; }

// Animal assignement operator.
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

// Animal type getter.
std::string Animal::getType() const
{
    return type;
}

// Animal sound.
void Animal::makeSound() const
{
    std::cout << "Animal sound..." << std::endl;
}

// Animal Distructor.
Animal::~Animal() { std::cout << "Animal default destructor called." << std::endl; }
