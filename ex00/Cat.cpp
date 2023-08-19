#include "Cat.hpp"

    // Cat default constructor.
    Cat::Cat() : Animal("Cat") { std::cout << "Cat default Constructor called." << std::endl; }
    
    // Cat copy constructor.
    Cat::Cat(const Cat& other) : Animal(other) { std::cout << "Cat copy constructor called." << std::endl; }
   
    // Animal assignement operator.
    Cat& Cat::operator=(const Cat& other) {
        if (this != &other)
            Animal::operator=(other);
        return *this;
    }

    // Cat sound.
    void Cat::makeSound() const {
        std::cout << "MEOOOOOW!" << std::endl;
    }

    // Cat Distructor.
    Cat::~Cat() { std::cout << "Cat default destructor called." << std::endl; }
